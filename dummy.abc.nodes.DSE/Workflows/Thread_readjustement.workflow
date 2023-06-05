<?xml version="1.0" encoding="UTF-8"?>
<dftools:workflow errorOnWarning="true" verboseLevel="INFO" xmlns:dftools="http://net.sf.dftools">
    <dftools:scenario pluginId="org.ietr.preesm.scenario.task"/>
    <dftools:task pluginId="pisdf-srdag" taskId="Migrator">
        <dftools:data key="variables">
            <dftools:variable name="% offset" value="0"/>
            <dftools:variable name="Consistency_Method" value="LCM"/>
            <dftools:variable name="Node number" value="1"/>
        </dftools:data>
    </dftools:task>
    <dftools:dataTransfer from="scenario" sourceport="PiMM"
        targetport="PiMM" to="Migrator"/>
    <dftools:dataTransfer from="scenario" sourceport="scenario"
        targetport="scenario" to="Migrator"/>
    <dftools:dataTransfer from="scenario"
        sourceport="architecture" targetport="architecture" to="Migrator"/>
</dftools:workflow>
