#include <system/object_ext.h>

#include <DOM/Presentation.h>
#include <Export/SaveFormat.h>
#include <Export/PdfOptions.h>

#include "SlidesExamples.h"

using namespace Aspose;
using namespace Aspose::Slides;
using namespace Aspose::Slides::Export;

using namespace System;

void ConvertToPDFWithHiddenSlides()
{

	//ExStart:ConvertToPDFWithHiddenSlides

	// The path to the documents directory.
	const String outPath = u"../out/ConvertToPDFWithHiddenSlides_out.pdf";
	const String templatePath = u"../templates/AccessSlides.pptx";

	//Instantiate Presentation class that represents PPTX file
	SharedPtr<Presentation> pres = MakeObject<Presentation>(templatePath);

	SharedPtr<Aspose::Slides::Export::PdfOptions> pdfOptions = MakeObject <Aspose::Slides::Export::PdfOptions>();
	pdfOptions->set_ShowHiddenSlides(true);

	pres->Save(outPath, Aspose::Slides::Export::SaveFormat::Pdf, pdfOptions);

	//ExEnd:ConvertToPDFWithHiddenSlides


}