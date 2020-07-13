// The Cloud Functions for Firebase SDK to create Cloud Functions and setup triggers.
const functions = require('firebase-functions');

// The Firebase Admin SDK to access Cloud Firestore.
const admin = require('firebase-admin');
admin.initializeApp();

// NPM 'fetch' node for connecting to server API
const fetch = require("node-fetch");

let toggle = true;


//  -------------------------------------------------------------------------------------------
//  -------------------------------------------------------------------------------------------

exports.selectNextConfig = functions.https.onCall(async (data, context) => {
	toggle = !toggle;
	let newConfigID = (toggle ? "dark_label" : "light_label");

	console.log('Received HTTPS call from UID: ' + context.auth.uid);
	console.log('Returning new config ID: ' + newConfigID);

	return { new_config_id: newConfigID };
});


/*

// Call config generator API when new image added to storage
exports.processImage = functions.storage.object().onFinalize(async (object) => {
	// Exit if this is triggered on a file that is not an image.
	if (!object.contentType.startsWith('image/')) {
		console.log('This is not an image: ' + object.name);
		return null;
	}

	let server_api = 'http://71096b8a9ed4.ngrok.io/api/archie';
	let target = 'archie-86718.appspot.com/o/';

	var uid = object.name.split("_")[0];
	console.log('Object name: ' + object.name);		// 7TfNWjAXeSWK0EEpTZqymsPn9C92_cat3182.jpg
	console.log('UID: ' +  uid);					// 7TfNWjAXeSWK0EEpTZqymsPn9C92

	let api_url = (server_api + '?target=' + target + '&file=' + object.name + '&alt=media');
	console.log('ARCHIE API URL: ' + api_url);

	let configApiResonse =  await fetch(api_url);
	let data = await configApiResonse.json();
	console.log(data);





	// -----------------------------------------------------------------------






	// Notification details.
	const payload = {
		notification: {
			title: 'ARCHIE: New Config Available',
			body: `A new config is ready for download!`
		}
	};

	// Listing all tokens as an array.
	let tokens = Object.keys('dX_AqJyJOEcjg2wCPO92cv:APA91bFXTP04aJdBZlR4Qqh71OFkr33lFPi0teiFAsMile45Hu4MSj5sXhpyD0yal1iia1gAhkfANTxvAWekE9xV4fhAPXZoZ7uZxRWpP2TkGPLsTjC_uQobjlbg8A0nYPrc4rDfrjcX');

	// Send notifications to all tokens.
	const notificationResponse = await admin.messaging().sendToDevice(tokens, payload);
	return null;
});

*/