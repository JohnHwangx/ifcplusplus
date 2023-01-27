/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcElectricFlowTreatmentDeviceTypeEnum = ENUMERATION OF	(ELECTRONICFILTER	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcElectricFlowTreatmentDeviceTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcElectricFlowTreatmentDeviceTypeEnumEnum
		{
			ENUM_ELECTRONICFILTER,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcElectricFlowTreatmentDeviceTypeEnum() = default;
		IfcElectricFlowTreatmentDeviceTypeEnum( IfcElectricFlowTreatmentDeviceTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1128263546; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcElectricFlowTreatmentDeviceTypeEnumEnum m_enum;
	};
}
