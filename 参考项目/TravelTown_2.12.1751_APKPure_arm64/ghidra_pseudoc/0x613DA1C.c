/* Ghidra 12.1.2 native pseudocode; RVA 0x613DA1C; MergeEngine.Model.Configuration.MergingConfigurationModel.IsItemInProducerChain; status ok */


/* WARNING: Possible PIC construction at 0x0623dc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623dc48) */
/* WARNING: Removing unreachable block (ram,0x0623dd3c) */
/* WARNING: Removing unreachable block (ram,0x0623dc4c) */
/* WARNING: Removing unreachable block (ram,0x0623dd40) */
/* WARNING: Removing unreachable block (ram,0x0623dc60) */
/* WARNING: Removing unreachable block (ram,0x0623dc70) */
/* WARNING: Removing unreachable block (ram,0x0623dc78) */
/* WARNING: Removing unreachable block (ram,0x0623dca0) */
/* WARNING: Removing unreachable block (ram,0x0623dc84) */
/* WARNING: Removing unreachable block (ram,0x0623dc90) */
/* WARNING: Removing unreachable block (ram,0x0623dcb0) */
/* WARNING: Removing unreachable block (ram,0x0623dcf0) */

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__IsItemInProducerChain
                (long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e245a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cdab8);
    func_0x03280a18(PTR_DAT_077db270);
    func_0x03280a18(PTR_DAT_077db278);
    func_0x03280a18(PTR_DAT_077db280);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077db290);
    func_0x03280a18(PTR_DAT_077db2e0);
    func_0x03280a18(PTR_DAT_077db2e8);
    bRam0000000007e245a4 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0623db3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_0623db3c:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    plVar6 = (long *)(**(code **)(*param_1 + 0x4d8))
                               (param_1,uVar5,*(undefined8 *)(*param_1 + 0x4e0));
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0623dbbc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777c248,0);
LAB_0623dbbc:
      lVar7 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      puVar2 = PTR_DAT_077db2e8;
      puVar1 = PTR_DAT_077db278;
      if (lVar7 != 0) {
        func_0x04145068(&uStack_98,lVar7,*(undefined8 *)PTR_DAT_077db290);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        uVar3 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar1);
        if ((uVar3 & 1) != 0) {
          uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
          return uVar8;
        }
        iVar10 = 5;
        func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077db270);
        goto LAB_0623dd10;
      }
    }
  }
  auVar11 = func_0x03280cac();
  uVar5 = auVar11._0_8_;
  if (auVar11._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(uVar5);
    lVar7 = *plVar6;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077db270);
    if (lVar7 == 0) {
      iVar10 = 0;
      uVar3 = 0;
LAB_0623dd10:
      return (ulong)(uVar3 & iVar10 == 4);
    }
    uVar5 = func_0x03280ca4(lVar7);
  }
  else {
    lVar7 = 0;
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077db270);
  if (lVar7 == 0) {
    func_0x03365958(uVar5);
  }
  func_0x03280ca4(lVar7);
  uVar8 = func_0x02f09514();
  return uVar8;
}

