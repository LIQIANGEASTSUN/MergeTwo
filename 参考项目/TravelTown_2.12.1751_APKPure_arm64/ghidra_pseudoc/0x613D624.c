/* Ghidra 12.1.2 native pseudocode; RVA 0x613D624; MergeEngine.Model.Configuration.MergingConfigurationModel.TryAddToMergeItemCache; status ok */


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

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__TryAddToMergeItemCache
                (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  if ((bRam0000000007e245a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db2b8);
    func_0x03280a18(PTR_DAT_077db2c0);
    func_0x03280a18(PTR_DAT_077db2c8);
    func_0x03280a18(PTR_DAT_077db2d0);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e245a5 = 1;
  }
  if (param_1[8] != 0) {
    uVar3 = func_0x04fe4928(param_1[8],param_2,param_3,*(undefined8 *)PTR_DAT_077db2b8);
    if ((uVar3 & 1) == 0) {
      uVar4 = func_0x055f7538(*(undefined8 *)PTR_DAT_077db2c8,param_2,
                              *(undefined8 *)PTR_DAT_077db2c0,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      func_0x0556c434(uVar4,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                      *(undefined8 *)PTR_DAT_077db2d0,0,0);
    }
    return (ulong)(uVar3 & 1);
  }
  plVar5 = (long *)func_0x03280cac();
  lVar12 = 0x7e24000;
  if ((bRam0000000007e245a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e245a6 = 1;
  }
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    plVar5 = (long *)0x0;
  }
  else {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077da9d8) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623d80c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077da9d8,0);
LAB_0623d80c:
    param_1 = (long *)PTR_DAT_0774e8c8;
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar2 = PTR_DAT_077da9e0;
    puVar1 = PTR_DAT_0774e8e0;
    if (plVar5 != (long *)0x0) {
      do {
        lVar12 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0623d884;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar1,0);
LAB_0623d884:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          lVar12 = 0;
          goto LAB_0623d8f8;
        }
        lVar12 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0623d8e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar2,0);
LAB_0623d8e0:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins
                  ();
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar14 = func_0x03280ca4(lVar12);
    if (auVar14._8_4_ != 1) break;
    plVar7 = (long *)func_0x072ce910();
    lVar12 = *plVar7;
    uVar9 = func_0x072ce920();
LAB_0623d8f8:
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *param_1) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0623d948;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*param_1,0);
LAB_0623d948:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (lVar12 == 0) {
      return uVar9;
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *param_1) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623d9f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*param_1,0);
LAB_0623d9f8:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  auVar13 = func_0x02f09514();
  plVar5 = auVar13._8_8_;
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
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623db3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_0623db3c:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar12 = *auVar13._0_8_;
    plVar5 = (long *)(**(code **)(lVar12 + 0x4d8))
                               (auVar13._0_8_,uVar4,*(undefined8 *)(lVar12 + 0x4e0));
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0623dbbc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0);
LAB_0623dbbc:
      lVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar2 = PTR_DAT_077db2e8;
      puVar1 = PTR_DAT_077db278;
      if (lVar12 != 0) {
        func_0x04145068(&uStack_f8,lVar12,*(undefined8 *)PTR_DAT_077db290);
        uStack_d8 = uStack_f0;
        uStack_e0 = uStack_f8;
        uStack_d0 = uStack_e8;
        uVar3 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar1);
        if ((uVar3 & 1) != 0) {
          uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
          return uVar9;
        }
        iVar11 = 5;
        func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_077db270);
        goto LAB_0623dd10;
      }
    }
  }
  auVar14 = func_0x03280cac();
  uVar4 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(uVar4);
    lVar12 = *plVar5;
    func_0x072ce920();
    func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_077db270);
    if (lVar12 == 0) {
      iVar11 = 0;
      uVar3 = 0;
LAB_0623dd10:
      return (ulong)(uVar3 & iVar11 == 4);
    }
    uVar4 = func_0x03280ca4(lVar12);
  }
  else {
    lVar12 = 0;
  }
  func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_077db270);
  if (lVar12 == 0) {
    func_0x03365958(uVar4);
  }
  func_0x03280ca4(lVar12);
  uVar9 = func_0x02f09514();
  return uVar9;
}

