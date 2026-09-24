/* Ghidra 12.1.2 native pseudocode; RVA 0x613D760; MergeEngine.Model.Configuration.MergingConfigurationModel.SetTrickyProducerItemsTransformOrigins; status ok */


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

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins
                (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long *unaff_x21;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar12 = 0x7e24000;
  if ((bRam0000000007e245a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e245a6 = 1;
  }
  if (param_1 == (long *)0x0) {
    func_0x03280cac();
    plVar5 = (long *)0x0;
  }
  else {
    lVar8 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077da9d8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623d80c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_077da9d8,0);
LAB_0623d80c:
    unaff_x21 = (long *)PTR_DAT_0774e8c8;
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
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
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0623d884;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar1,0);
LAB_0623d884:
        uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
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
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0623d8e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar2,0);
LAB_0623d8e0:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
        func_0x0623c99c();
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar14 = func_0x03280ca4(lVar12);
    if (auVar14._8_4_ != 1) break;
    plVar6 = (long *)func_0x072ce910();
    lVar12 = *plVar6;
    uVar9 = func_0x072ce920();
LAB_0623d8f8:
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0623d948;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar5,*unaff_x21,0);
LAB_0623d948:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
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
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623d9f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar5,*unaff_x21,0);
LAB_0623d9f8:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
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
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0623db3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_0623db3c:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    lVar12 = *auVar13._0_8_;
    plVar5 = (long *)(**(code **)(lVar12 + 0x4d8))
                               (auVar13._0_8_,uVar7,*(undefined8 *)(lVar12 + 0x4e0));
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0623dbbc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0);
LAB_0623dbbc:
      lVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      puVar2 = PTR_DAT_077db2e8;
      puVar1 = PTR_DAT_077db278;
      if (lVar12 != 0) {
        func_0x04145068(&uStack_c8,lVar12,*(undefined8 *)PTR_DAT_077db290);
        uStack_a8 = uStack_c0;
        uStack_b0 = uStack_c8;
        uStack_a0 = uStack_b8;
        uVar3 = func_0x051159b4(&uStack_b0,*(undefined8 *)puVar1);
        if ((uVar3 & 1) != 0) {
          uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
          return uVar9;
        }
        iVar11 = 5;
        func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077db270);
        goto LAB_0623dd10;
      }
    }
  }
  auVar14 = func_0x03280cac();
  uVar7 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(uVar7);
    lVar12 = *plVar5;
    func_0x072ce920();
    func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077db270);
    if (lVar12 == 0) {
      iVar11 = 0;
      uVar3 = 0;
LAB_0623dd10:
      return (ulong)(uVar3 & iVar11 == 4);
    }
    uVar7 = func_0x03280ca4(lVar12);
  }
  else {
    lVar12 = 0;
  }
  func_0x051159b0(&uStack_b0,*(undefined8 *)PTR_DAT_077db270);
  if (lVar12 == 0) {
    func_0x03365958(uVar7);
  }
  func_0x03280ca4(lVar12);
  uVar9 = func_0x02f09514();
  return uVar9;
}

