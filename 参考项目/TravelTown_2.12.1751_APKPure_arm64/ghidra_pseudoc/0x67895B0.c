/* Ghidra 12.1.2 native pseudocode; RVA 0x67895B0; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x0688979c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068897a0) */
/* WARNING: Removing unreachable block (ram,0x068897c4) */

void MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__DisposeSystem(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_078101f8;
  puVar1 = PTR_DAT_0774e758;
  if ((bRam0000000007e28d31 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810200);
    func_0x03280a18(PTR_DAT_0780df90);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07810268);
    func_0x03280a18(PTR_DAT_077f1660);
    func_0x03280a18(PTR_DAT_07810270);
    func_0x03280a18(PTR_DAT_07810278);
    func_0x03280a18(PTR_DAT_077f1688);
    func_0x03280a18(PTR_DAT_07810220);
    func_0x03280a18(PTR_DAT_07810228);
    func_0x03280a18(PTR_DAT_07810230);
    func_0x03280a18(PTR_DAT_078101f8);
    func_0x03280a18(PTR_DAT_07810238);
    bRam0000000007e28d31 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x056ed730(uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_07810230;
  if (lVar7 != 0) {
    func_0x03ea624c(lVar7,uVar3,*(undefined8 *)PTR_DAT_077f1688);
    lVar7 = *(long *)(param_1 + 0x28);
    uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x056ed730(uVar3,param_1,*(undefined8 *)puVar2,0);
    puVar2 = PTR_DAT_07810238;
    if (lVar7 != 0) {
      func_0x03ea624c(lVar7,uVar3,*(undefined8 *)PTR_DAT_07810268);
      lVar7 = *(long *)(param_1 + 0x28);
      uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x056ed730(uVar3,param_1,*(undefined8 *)puVar2,0);
      puVar2 = PTR_DAT_07810228;
      puVar1 = PTR_DAT_0780df90;
      if (lVar7 != 0) {
        func_0x03ea624c(lVar7,uVar3,*(undefined8 *)PTR_DAT_077f1660);
        lVar7 = *(long *)(param_1 + 0x28);
        uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x054221d4(uVar3,param_1,*(undefined8 *)puVar2,0);
        puVar1 = PTR_DAT_07810200;
        if (lVar7 != 0) {
          lVar4 = *(long *)PTR_DAT_07810278;
          puStack_50 = (undefined *)0x68897a0;
          lVar5 = *(long *)(lVar4 + 0x38);
          uStack_48 = uVar3;
          lStack_40 = lVar7;
          lStack_38 = param_1;
          if (lVar5 == 0) {
            func_0x03256878(lVar4);
            lVar5 = *(long *)(lVar4 + 0x38);
          }
          lVar4 = *(long *)(lVar5 + 8);
          uStack_60 = puStack_50;
          puStack_50 = puVar1;
          puVar6 = *(undefined8 **)(lVar4 + 0x38);
          if (puVar6 == (undefined8 *)0x0) {
            func_0x03280a18(PTR_DAT_0774e558);
            puVar6 = *(undefined8 **)(lVar4 + 0x38);
            if (puVar6 == (undefined8 *)0x0) {
              func_0x03256878(lVar4);
              puVar6 = *(undefined8 **)(lVar4 + 0x38);
            }
          }
          uVar8 = *puVar6;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar8 = func_0x057a51c4(uVar8,0);
          puStack_50 = (undefined *)uStack_60;
          uStack_60 = 0;
          uStack_58 = 0;
          func_0x072a6c4c(&uStack_60,uVar8,0,0,1,0);
          func_0x07286e40(lVar7,uStack_60,uStack_58,uVar3,1);
          return;
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

