# Atmosphere-Updater

Update Atmosphere CFW and sigpatches from within your switch!

![Img](images/example.jpg)

----

## Install

Download the latest release from [here](https://github.com/JackInTheShop/AIO-atmosphere-updater/releases).

Move the downloaded .nro onto you Nintendo Switch SD Card inside the folder **/switch/AIO-atmosphere-updater/**.

That's it!

----

## Usage

__**The app currently has 4 main options.**__

**Update Atmosphere + sigpatches:**

* Downloads the latest Atmosphere release and installs everything from that release. 
* Downloads the latest sigpatches.
* If `/config/BCT.ini` exists in Atmosphere release, it will prompt user asking if they want to overwrite said file as shown here:

![Img](images/example.jpg)

**Update Hekate:**

* Installs the latest release of Hekate.
* Offers to copy **/atmosphere/reboot_payload.bin** to **/bootloader/payloads/reboot_payload.bin** in order to avoid booting to hekate after install with no payloads. If you ran **Update Atmosphere + sigpatches** first, **/atmosphere/reboot_payload.bin** is the latest **fusee-primary.bin**.

**Update App:**

* Downloads the latest version of this app!
* Deletes the previous old version.

**Reboot (reboot to payload):**

* Reboots the switch, loading the payload from **/atmosphere/reboot_payload.bin**.
* This is recommended after install Atmosphere.
* Updating Atmosphere automatically includes the needed **reboot_payload.bin**.

----

## Build

Install the devkitpro tool chain from [here](https://devkitpro.org/wiki/Getting_Started).

 Using pacman (installed with devkitpro) install the following libraries:
* [switch-ex-curl](https://www.github.com/eXhumer/switch-ex-curl/)
* switch-freetype
* switch-sdl2
* switch-sdl2_gfx
* switch-sdl2_image
* switch-sdl2_ttf
* switch-zlib

If you have any problems building, feel free to open an issue including any build errors.
 
----

## Special Thanks!

[ITotalJustice](ITotalJustice) for originally developing the app.

[eXhumer](eXhumer) for recently updating the app with libnx 3.2.0 support, notably adding sigpatches support and the BCT.ini prompt. 

[toph](https://github.com/sudot0ph) for the design of the app icon, as well as the most icons used within the app!

[Black Rabbit](https://github.com/BlackRabbit22) for the design of the plus and error icon (and the idea for this app)!

[bandithedoge](https://github.com/bandithedoge) for the background!

[KrankRival](https://github.com/KranKRival) for the initial sys / ams version pr (and for motivating me to work on touch controls)!
