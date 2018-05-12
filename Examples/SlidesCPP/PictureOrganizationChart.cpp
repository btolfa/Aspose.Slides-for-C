#include <iostream>
#include <system/console.h>
#include <Export/SaveFormat.h>
#include <DOM/SmartArt/SmartArtQuickStyleType.h>
#include <DOM/SmartArt/SmartArtNode.h>
#include <DOM/SmartArt/SmartArtLayoutType.h>
#include <DOM/SmartArt/SmartArtColorType.h>
#include <DOM/SmartArt/SmartArt.h>
#include <DOM/SmartArt/ISmartArtNodeCollection.h>
#include <DOM/SmartArt/ISmartArtNode.h>
#include <DOM/SmartArt/ISmartArt.h>
#include <DOM/SmartArt/OrganizationChartLayoutType.h>
#include <DOM/Shape.h>
#include <DOM/Presentation.h>
#include <DOM/ITextFrame.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISlide.h>
#include <DOM/IShapeCollection.h>
#include <DOM/IShape.h>

#include <system/object.h>
#include <system/object_ext.h>
#include <system/special_casts.h>
#include <system/io/path.h>

#include "SlidesExamples.h"

using namespace Aspose::Slides;
using namespace Aspose::Slides::SmartArt;
using namespace System;

void ShowPictureOrganizationChart()
{

	// ExStart:ShowPictureOrganizationChart

	// The path to the documents directory.
	const String outPath = u"../out/PictureOrganizationChart_out.pptx";

	// Load the desired the presentation
	SharedPtr<Presentation> pres = MakeObject<Presentation>();
	
	//Adding Picture Organization Chart
	System::SharedPtr<ISmartArt> smartArt = pres->get_Slides()->idx_get(0)->get_Shapes()->AddSmartArt(0, 0, 400, 400, Aspose::Slides::SmartArt::SmartArtLayoutType::PictureOrganizationChart);

	pres->Save(outPath, Aspose::Slides::Export::SaveFormat::Pptx);

	// ExEnd:ShowPictureOrganizationChart
}

