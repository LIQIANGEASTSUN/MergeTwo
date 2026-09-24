/* Ghidra 12.1.2 native pseudocode; RVA 0x613FB58; MergeEngine.Model.Configuration.MergingConfigurationModel.IsMaxLevel; status ok */


bool MergeEngine_Model_Configuration_MergingConfigurationModel__IsMaxLevel(void)

{
  long lVar1;
  
  lVar1 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetNextItemOnGraph();
  return lVar1 == 0;
}

