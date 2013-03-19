#!/bin/bash
# asGoogleAds

cd "/asHaxeExtensions/asgoogleads/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
cd "/asHaxeExtensions"
zip -r asgoogleads.zip asgoogleads
haxelib test asgoogleads.zip



# asIAP

cd "/asHaxeExtensions/asiap/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
haxelib run hxcpp Build.xml -Diphoneos 
cd "/asHaxeExtensions"
zip -r asiap.zip asiap
haxelib test asiap.zip



# asRate

cd "/asHaxeExtensions/asrate/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
cd "/asHaxeExtensions"
zip -r asrate.zip asrate
haxelib test asrate.zip



# ganalytics

cd "/asHaxeExtensions/ganalytics/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
cd "/asHaxeExtensions"
zip -r ganalytics.zip ganalytics
haxelib test ganalytics.zip

# hxgk

cd "/asHaxeExtensions/hxgk/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
cd "/asHaxeExtensions"
zip -r hxgk.zip hxgk
haxelib test hxgk.zip

# push notifications

cd "/asHaxeExtensions/aspush/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
haxelib run hxcpp Build.xml -Diphoneos 
cd "/asHaxeExtensions"
zip -r aspush.zip aspush
haxelib test aspush.zip

# asnetworkconnection

cd "/asHaxeExtensions/asurlconnection/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
haxelib run hxcpp Build.xml -Diphoneos 
cd "/asHaxeExtensions"
zip -r asurlconnection.zip asurlconnection
haxelib test asurlconnection.zip

# associal

cd "/asHaxeExtensions/associal/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
haxelib run hxcpp Build.xml -Diphoneos 
cd "/asHaxeExtensions"
zip -r associal.zip associal
haxelib test associal.zip


# particle engine

cd "/asHaxeExtensions"
zip -r asparticleengine.zip asparticleengine
haxelib test asparticleengine.zip

# asmessanger

cd "/asHaxeExtensions/asmessenger/project"
haxelib run hxcpp Build.xml -Diphonesim
haxelib run hxcpp Build.xml -Diphoneos -DHXCPP_ARMV7
cd "/asHaxeExtensions"
zip -r asmessenger.zip asmessenger
haxelib test asmessenger.zip

# asplaybilling

cd "/asHaxeExtensions/asplaybilling/project"
haxelib run hxcpp Build.xml -Dandroid
cd "/asHaxeExtensions"
zip -r asplaybilling.zip asplaybilling
haxelib test asplaybilling.zip