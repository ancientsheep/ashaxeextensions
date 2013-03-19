<?xml version="1.0" encoding="utf-8"?>
<project>
 
	<ndll name="asplaybilling" />
	<java path="project/android" />

	<!-- include our .aidl file -->
	<template path="ndll/Android/IMarketBillingService.aidl" rename="classes/com/android/vending/IMarketBillingService.aidl" if="android"/>

</project>