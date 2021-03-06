#pragma once
#include <DOM/NullableBool.h>
#include <DOM/DocumentProperties.h>

using namespace std;
using namespace System;

//Developer Guide > Loading, Saving and Converting

#pragma region Working with ActiveX Controls
void LinkingVideoActiveXControl();
void ManageActiveXControl();
#pragma endregion

#pragma region Working with Presentation Decks
#pragma region Presentation Conversions to different formats

void ConversionToTIFFNotes();
void ConvertNotesSlideViewToPDF();
void ConvertPresentationToPasswordProtectedPDF();
void ConvertPresentationToResponsiveHTML();
void ConvertIndividualSlideToHTML();
void ConvertToPDF();
void ConvertToPDFWithHiddenSlides();
void ConvertToSWF();
void ConvertWholePresentationToHTML();
void ConvertWithoutXpsOptions();
void ConvertWithXpsOptions();
void CustomOptionsPDFConversion();
void PPTtoPPTX();
void PresentationToTIFFWithCustomImagePixelFormat();
void PresentationToTIFFWithDefaultSize();
void LinkAllFontsHtmlController();
void EmbedFontsInHtml();
void ConvertingPresentationToHtmlWithEmbedAllFontsHtmlController();
void BestImagesCompressionRatioforPDF();


#pragma endregion

#pragma region Opening presentation decks

void OpenPasswordPresentation();
void OpenPresentation();
void VerifyingPresentationWithoutloading();
void OpenVeryLargePresentation();


#pragma endregion

#pragma region Loading Options
void MeteredLicencing();
void SpecifyFontsUsedWithPresentation();
void AddingEMZImagesToImageCollection();
void AddBlobToPresentation();

#pragma endregion
#pragma region Working with Presentation Document properties

void AccessBuiltinProperties();
void AccessModifyingProperties();
void AccessOpenDoc();
void AccessProperties();
void UpdatePresentationProperties();
void UpdatePresentationPropertiesUsingNewTemplate();
void UpdateByTemplate(System::String path, System::SharedPtr<Aspose::Slides::DocumentProperties> templateprop);
void UpdatePresentationPropertiesUsingPropertiesOfAnotherPresentationAsATemplate();

#pragma endregion

#pragma region Saving Presentation decks

void RemoveWriteProtection();
void CreateNewPresentation();
void SaveAsPredefinedViewType();
void SaveAsReadOnly();
void SaveProperties();
void SaveToFile();
void SaveWithPassword();
void ExportBlobFromPresentation();
void ApplyingExternalThemeToDependingSlides();
void SettingInterruptionToken();

//void SavingHTMLAndCSSFileWhenExportingIntoHTML();


void RenderingNotesWhileConvertingToHTML();
void ConvertingPresentationToHTMLWithPreservingOriginalFonts();

#pragma endregion

#pragma region Presentation Rendering-Printing
void DefaultPrinterPrinting();
void SetSlideNumber();
void SetZoom();
void SpecificPrinterPrinting();
#pragma endregion

#pragma region Managing VBA Macros
void AddVBAMacros();
void RemoveVBAMacros();
#pragma endregion
#pragma endregion

#pragma region Working with Slides

#pragma region Managing Slides
void AddSlides();
void AddLayoutSlides();
void AccessSlides();
void AccessSlidebyID();
void AccessSlidebyIndex();
void RemoveSlideUsingIndex();
void RemoveSlideUsingReference();
void ChangePosition();
void CloneWithInSamePresentation();
void CloneWithinSamePresentationToEnd();
void CloneAtEndOfAnotherPresentation();
void CloneInAnotherPresentationAtSpecifiedPosition();
void CloneAtEndOfAnotherSpecificPosition();
void CloneToAnotherPresentationWithMaster();
void CloneToAnotherPresentationWithSetSizeAndType();
void CheckSlidesComparison();
void HeaderFooterManager();
void SetChildFooter();
void SetSizeAndType();
void ManageSlidesSections();
void AddNotesSlideWithNotesStyle();
void HandoutHeaderFooterManager();
void MasterNotesSlideHeaderFooterManager();

#pragma endregion

#pragma region Working with hyperlinks
void RemoveHyperlinks();
#pragma endregion

#pragma region Slide Background
void SetBackgroundToGradient();
void SetImageAsBackground();
void SetSlideBackgroundMaster();
void SetSlideBackgroundNormal();
#pragma endregion

#pragma region Slide Comments
void AccessSlideComments();
void AddSlideComments();
#pragma endregion

#pragma region Managing slide layouts
void SetPDFPageSize();
#pragma endregion

#pragma region Extract Data from Presentation
void ExtractVideo();
#pragma endregion

#pragma region Managing slide Notes
void RemoveNotesAtSpecificSlide();
void RemoveNotesFromAllSlides();
#pragma endregion

#pragma region Rendering Slides
void CreateSlidesSVGImage();
void ThumbnailFromSlide();
void ThumbnailFromSlideInNotes();
void ThumbnailWithUserDefinedDimensions();
void RenderComments();
//void CustomSvgShapeFormattingController();
//void GeneratingSVGWithCustomShapeIDS();


#pragma endregion

#pragma region Managing Slide Transitions
void ManageSimpleSlideTransitions();
void ManagingBetterSlideTransitions();
void SetTransitionEffects();
void SimpleSlideTransitions();
#pragma endregion

#pragma region Working with Shapes

#pragma region Working with Charts
void AddCustomError();
void AddErrorBars();
void AnimatingCategoriesElements();
void AnimatingSeries();
void AnimatingSeriesElements();
void AutomaticChartSeriescolor();
void ChangeChartCategoryAxis();
void ChartEntities();
void ChartTrendLines();
void DisplayChartLabels();
void DisplayPercentageAsLabels();
void DoughnutChartHole();
void ExistingChart();
void ManagePropertiesCharts();
void NormalCharts();
void NumberFormat();
void PieChart();
void ScatteredChart();
void SecondPlotOptionsforCharts();
void SetAutomaticSeriesFillColor();
void SetCategoryAxisLabelDistance();
void SetChartSeriesOverlap();
void SetDataLabelsPercentageSign();
void SetDataRange();
void SetGapWidth();
void MultiCategoryChart();
void SwitchChartRowColumns();
void SettingAutomicPieChartSliceColors();
void AddBoxAndWhiskerChart();
void AddFunnelChart();
void AddHistogramChart();
void AddHistogramParetoChart();
void AddSunburstChart();
void AddTreemapChart();
void AddWaterfallChart();




#pragma endregion

#pragma region ManageAutoShapes	

void AccessingAltTextinGroupshapes();
void AddArrowShapedLine();
void AddArrowShapedLineToSlide();
void AddPlainLineToSlide();
void ChangeShapeOrder();
void ConnectorLineAngle();
static double getDirection(float w, float h, Aspose::Slides:: NullableBool flipH, Aspose::Slides::NullableBool flipV);
void ConnectShapesUsingConnectors();
void ConnectShapeUsingConnectionSite();
void FormatJoinStyles();
void FormatLines();
void FormattedEllipse();
void FormattedRectangle();
void SimpleEllipse();
void SimpleRectangle();
#pragma endregion

#pragma region ManageFrameObjects	

void AccessOLEObjectFrame();
void AddAudioFrame();
void AddOLEObjectFrame();
void AddRelativeScaleHeightPictureFrame();
void AddSimplePictureFrames();
void AddVideoFrame();
void AddVideoFrameFromWebSource();
void ChangeOLEObjectData();
void EmbeddedVideoFrame();
void PictureFrameFormatting();
System::ArrayPtr<uint8_t> GetFileByteData(String fileNameZip);
void StretchOffsetLeftForPictureFrame();


#pragma endregion

#pragma region ShapeEffects	

void AnimationsOnShapes();
void AnimationsOnOLEObject();
void Apply3DRotationEffectOnShape();
void ApplyBevelEffects();
void CloneShapes();
void CreateBoundsShapeThumbnail();
void CreateGroupShape();
void CreateScalingFactorThumbnail();
void CreateShapeThumbnail();
void CreateShapeSVGImage();
void CreateSmartArtChildNoteThumbnail();
void FillShapesGradient();
void FillShapesPattern();
void FillShapesPicture();
void FillShapeswithSolidColor();
void FindShapeInSlide();
void Hidingshapes();
void InterlopShapeID();
void RemoveShape();
void RotatingShapes();
void SetAlternativeText();
void InterlopShapeID();
void InsertSvgIntoPresentation();

#pragma endregion

#pragma region SmartArt	

void AccessChildNodes();
void AccessChildNodeSpecificPosition();
void AccessSmartArt();
void AccessSmartArtParticularLayout();
void AccessSmartArtShape();
void AddNodes();
void AddNodesSpecificPosition();
void AssistantNode();
void ChangeSmartArtLayout();
void ChangeSmartArtShapeColorStyle();
void ChangeSmartArtState();
void ChangeTextOnSmartArtNode();
void ChangSmartArtShapeStyle();
void CheckSmartArtHiddenProperty();
void CreateSmartArtShape();
void FillFormatSmartArtShapeNode();
void OrganizeChartLayoutType();
void RemoveNode();
void RemoveNodeSpecificPosition();
void SmartArtNodeLevel();
void GetTextFromSmartArtNode();
void ShowPictureOrganizationChart();

#pragma endregion

#pragma region Working with Tables	

void AddImageinsideTableCell();
void CellSplit();
void CloningInTable();
void MergeCell();
void MergeCells();
void RemovingRowColumn();
void StandardTables();
void TableFromScratch();
void TableWithCellBorders();
void UpdateExistingTable();
void VerticallyAlignText();
#pragma endregion

#pragma region Formatting Text	

void ApplyInnerShadow();
void ApplyOuterShadow();
void CustomRotationAngleTextframe();
void DefaultFonts();
void ExportingHTMLText();
void FontFamilySetting();
void FontProperties();
void ImportingHTMLText();
void LineSpacing();
void ManageEmbeddedFonts();
void ManageParagraphFontProperties();
void ManageParagraphPictureBulletsInPPT();
void MultipleParagraphs();
void ParagraphBullets();
void ParagraphIndent();
void ParagraphsAlignment();
void ReplaceFontsExplicitly();
void ReplacingText();
void RotatingText();
void RuleBasedFontsReplacement();
void SetAnchorOfTextFrame();
void SetAutofitOftextframe();
void SetTextFontProperties();
void ShadowEffects();
void TextBoxHyperlink();
void TextBoxOnSlideProgram();
void UseCustomFonts();
void AddEmbeddedFonts();
void AddColumnInTexBoxes();
void GetFontsFolders();
void AddingSuperscriptAndSubscriptTextInTextFrame();
void EndParaGraphProperties();

#pragma endregion		


#pragma endregion

#pragma endregion