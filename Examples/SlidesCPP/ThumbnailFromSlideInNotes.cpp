#include <Export/SaveFormat.h>
#include <DOM/Presentation.h>
#include <DOM/ISlideCollection.h>
#include <DOM/IShapeCollection.h>
#include <DOM/INotesSlideManager.h>
#include <DOM/INotesSlide.h>
#include <DOM/SlideSize.h>

#include <drawing/imaging/image_format.h>
#include <system/string.h>
#include <system/IO/file.h>

#include "SlidesExamples.h"

using namespace Aspose::Slides;

using namespace System;
using namespace System::IO;
using namespace System::Drawing::Imaging;
using namespace System::Drawing;


void ThumbnailFromSlideInNotes()
{
	//ExStart:ThumbnailFromSlideInNotes

	// The path to the documents directory.
	const String templatePath = L"../templates/TestDeck_050.pptx";
	const String outPath = L"../out/Aspose_NotesSlide_out.png";

	// Instantiate Presentation class
	SharedPtr<Presentation> pres = MakeObject<Presentation>(templatePath);

	// Access the first slide
	SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);

	// User defined dimension
	int desiredX = 1200;
	int desiredY = 800;

	// Create a full scale image
	auto bitmap = slide->get_NotesSlideManager()->get_NotesSlide()->GetThumbnail(2, 2);

	bitmap->Save(outPath, ImageFormat::get_Png());

	//ExEnd:ThumbnailFromSlideInNotes
}
