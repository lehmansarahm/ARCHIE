import flask
from flask import request, jsonify

import urllib.request


app = flask.Flask(__name__)
app.config["DEBUG"] = True

img_url_prefix = 'https://firebasestorage.googleapis.com/v0/b/' 
img_url_test = '''http://localhost:5000/api/archie
?target=archie-86718.appspot.com/o/
&file=cat3182.jpg
&alt=media'''


# --------------------------------------------------------------------------------
# --------------------------------------------------------------------------------


class GuiConfig:
    def __init__(self, fSize, fColor, bOpacity, bColor):
        self.font_size = fSize
        self.font_color = fColor
        self.background_opacity = bOpacity
        self.background_color = bColor

first_config = GuiConfig(12, 'black', 1, 'white')
second_config = GuiConfig(24, 'yellow', 0.5, 'blue')

use_first_config = True


# --------------------------------------------------------------------------------
# --------------------------------------------------------------------------------


@app.route('/', methods=['GET'])
def home():
    return '''<h1>ARCHIE</h1>
    <p>A prototype API for generating lists of GUI profiles 
    for mobile AR apps.  <a href="''' + img_url_test + '''">[Test]</a></p>'''


@app.route('/api/archie', methods=['GET'])
def archie():
    # parse out the target file details
    query_parameters = request.args
    target = query_parameters.get('target')     # archie-86718.appspot.com/o/
    file = query_parameters.get('file')         # headshot.jpg
    alt = query_parameters.get('alt')           # media

    # download the target file
    img_url = img_url_prefix + target + file + '?alt=' + alt
    urllib.request.urlretrieve(img_url, file)


    # ----------------------------------------------------------------------------
    # TODO - perform actual logic (right now, just toggling a global boolean)
    # ----------------------------------------------------------------------------
    global use_first_config
    use_first_config = not use_first_config

    if use_first_config is True:
        config = first_config
    else:
        config = second_config
    # ----------------------------------------------------------------------------


    # return the result 
    return jsonify(font_size=config.font_size, 
        font_color=config.font_color,
        background_opacity=config.background_opacity,
        background_color=config.background_color)



@app.errorhandler(404)
def page_not_found(e):
    return "<h1>404</h1><p>The resource could not be found.</p>", 404


app.run()