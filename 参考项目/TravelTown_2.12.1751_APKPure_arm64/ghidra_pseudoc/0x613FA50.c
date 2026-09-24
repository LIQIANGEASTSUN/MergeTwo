/* Ghidra 12.1.2 native pseudocode; RVA 0x613FA50; MergeEngine.Model.Configuration.MergingConfigurationModel.GetItemLevel; status ok */


uint MergeEngine_Model_Configuration_MergingConfigurationModel__GetItemLevel
               (long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000007e245bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077db338);
    bRam0000000007e245bc = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x4d8))
                             (param_1,param_2,*(undefined8 *)(*param_1 + 0x4e0));
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0623fb00;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar4 = (**(code **)(*param_1 + 0x4e8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x4f0));
    if (lVar5 != 0) {
      iVar1 = func_0x04145210(lVar5,uVar4,*(undefined8 *)PTR_DAT_077db338);
      return iVar1 + 1;
    }
  }
  func_0x03280cac();
  lVar5 = func_0x0623e2ec();
  return (uint)(lVar5 == 0);
}

