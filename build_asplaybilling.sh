
# asplaybilling

cd "/asHaxeExtensions/asplaybilling/project"
haxelib run hxcpp Build.xml -Dandroid
cd "/asHaxeExtensions"
zip -r asplaybilling.zip asplaybilling
haxelib test asplaybilling.zip