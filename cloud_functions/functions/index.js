// The Cloud Functions for Firebase SDK to create Cloud Functions and setup triggers.
const functions = require('firebase-functions');

// The Firebase Admin SDK to access Cloud Firestore.
const admin = require('firebase-admin');
admin.initializeApp();

// NPM 'fetch' node for connecting to server API
const fetch = require("node-fetch");


//  -------------------------------------------------------------------------------------------
//  -------------------------------------------------------------------------------------------


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

	let response =  await fetch(api_url);
	let data = await response.json();
	console.log(data);

	// TODO:  figure out how to get the updated config back to the user
	return null;
});