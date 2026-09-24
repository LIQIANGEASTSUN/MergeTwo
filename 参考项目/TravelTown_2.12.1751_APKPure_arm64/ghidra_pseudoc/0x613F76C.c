/* Ghidra 12.1.2 native pseudocode; RVA 0x613F76C; MergeEngine.Model.Configuration.MergingConfigurationModel.GetGraph; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GetGraph
                (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e245c0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db398);
    func_0x03280a18(PTR_DAT_077db3a0);
    func_0x03280a18(PTR_DAT_077db3a8);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e245c0 = 1;
  }
  uVar4 = func_0x0623dde8(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    uVar7 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077db3a8,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
    }
    func_0x0556c434(uVar7,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                    *(undefined8 *)PTR_DAT_077db3a0,0,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if (lVar3 != 0) {
      func_0x04fe48b0(lVar3,param_2,&stack0xfffffffffffffff8,
                      *(undefined8 *)
                       (*(long *)(*(long *)(*(long *)PTR_DAT_077db398 + 0x20) + 0xc0) + 0xf8));
    }
    return 0;
  }
  auVar10 = func_0x03280cac();
  if ((bRam0000000007e245ba & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07763de8);
    bRam0000000007e245ba = 1;
  }
  plVar5 = (long *)func_0x0623e2ec(auVar10._0_8_,auVar10._8_8_);
  if (plVar5 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0623f944;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_0623f944:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (param_3 == 0) {
      auVar10 = func_0x03280cac();
      plVar5 = auVar10._0_8_;
      if ((bRam0000000007e245bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779820);
        bRam0000000007e245bb = 1;
      }
      plVar8 = (long *)func_0x0623f4b8(plVar5,auVar10._8_8_);
      if (plVar8 == (long *)0x0) {
        auVar10 = func_0x03280cac();
        plVar5 = auVar10._0_8_;
        if ((bRam0000000007e245bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_077db338);
          bRam0000000007e245bc = 1;
        }
        plVar8 = (long *)(**(code **)(*plVar5 + 0x4d8))
                                   (plVar5,auVar10._8_8_,*(undefined8 *)(*plVar5 + 0x4e0));
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777c248) {
                puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0623fb00;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
          lVar3 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          uVar7 = (**(code **)(*plVar5 + 0x4e8))
                            (plVar5,auVar10._8_8_,*(undefined8 *)(*plVar5 + 0x4f0));
          if (lVar3 != 0) {
            iVar2 = func_0x04145210(lVar3,uVar7,*(undefined8 *)PTR_DAT_077db338);
            return (ulong)(iVar2 + 1);
          }
        }
        func_0x03280cac();
        lVar3 = func_0x0623e2ec();
        return (ulong)(lVar3 == 0);
      }
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0623fa20;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_0623fa20:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                    /* WARNING: Could not recover jumptable at 0x0623fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x4d8))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x4e0));
      return uVar4;
    }
    uVar1 = func_0x041447fc(param_3,uVar7,*(undefined8 *)PTR_DAT_07763de8);
    uVar1 = uVar1 ^ 1;
  }
  return (ulong)(uVar1 & 1);
}

