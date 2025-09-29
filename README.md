ESP8266 Deauther;

This repository is a proof-of-concept build based on SpacehuhnTech’s ESP8266 Deauther.
Instead of using prebuilt .bin images and external flashers, this version was compiled and uploaded directly via the Arduino IDE as an experiment to learn the build process and validate functionality.
NOT a forked release — this repo is explicitly educational: it documents my changes, build steps, memory report, and screenshots for people who want to see how the project compiles with Arduino IDE on a typical setup.

Quick links
Official project (primary reference): https://github.com/SpacehuhnTech/esp8266_deauther.git
Official docs: https://deauther.com

What’s different here
✅ Built with Arduino IDE (sketch and accompanying .cpp/.h files compiled locally).
✅ Uploaded directly from Arduino IDE (no separate flasher or prebuilt binaries were used).

Build & Upload
Clone this repo (or download and open the folder in VS Code / Arduino IDE).
Open esp8266_deauther.ino in the Arduino IDE.
Tools → Board → select your board
Compile: click Verify/Compile.
Upload: click Upload.
Open Serial Monitor at 115200 baud to see boot logs and status.

Disclaimer & Legal
This project and repository are for educational and testing purposes only.
Use only on your own networks and devices.
Check your local laws and regulations before running deauthentication or other WiFi-related tests.
I am not responsible for misuse.
The original project is a proof of concept; the same warning applies. See the official repo for more details.

License & Credits
This repo follows the original project’s license (MIT). All credit for the original firmware; code and core functionality goes to SpacehuhnTech and contributors: https://github.com/SpacehuhnTech/esp8266_deauther.git
My additions here are limited to the Arduino-IDE build/test process, docs, and screenshots.
