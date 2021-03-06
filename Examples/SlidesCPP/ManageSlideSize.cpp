#include <Export/SaveFormat.h>
#include <DOM/Presentation.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISlideSize.h>
#include <DOM/SlideSizeType.h>
#include <Export/Pdfoptions.h>


#include <drawing/imaging/image_format.h>
#include <system/string.h>
#include <system/IO/file.h>

#include "ManageSlideSize.h"

using namespace Aspose::Slides;

using namespace System;
void::ManageSlideSize::SetPDFPageSize()
{
	//ExStart:SetPDFPageSize

	// The path to the documents directory.
	const String outPath = L"../out/SetPDFPageSize_out.pptx";

	// Instantiate Presentation class
	SharedPtr<Presentation>pres = MakeObject<Presentation>();


	// Set SlideSize.Type Property 
	pres->get_SlideSize()->set_Type( SlideSizeType::A4Paper);

	// Set different properties of PDF Options
	Aspose::Slides::Export::PdfOptions opts = Aspose::Slides::Export::PdfOptions();
	opts.set_SufficientResolution (600);

	// Save presentation to disk
	pres->Save(outPath, Aspose::Slides::Export::SaveFormat::Pdf, &opts);
	//ExEnd:SetPDFPageSize
}
