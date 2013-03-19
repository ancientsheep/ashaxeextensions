<?xml version="1.0" encoding="utf-8"?>
<project>
 
	<ndll name="a" />
	<java path="project/android" />
 
	<!-- Include native frameworks -->
  	<dependency name="StoreKit.framework" if="ios" />

  	<!-- Template libs -->
  	<template path="template/iphone/asIAP" rename="asIAP" if="ios"/>

</project>