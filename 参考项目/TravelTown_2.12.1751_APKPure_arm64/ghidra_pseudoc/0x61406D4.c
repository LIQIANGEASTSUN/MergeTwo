/* Ghidra 12.1.2 native pseudocode; RVA 0x61406D4; MergeEngine.Model.Configuration.MergingConfigurationModel.IsPrimaryProducer; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__IsPrimaryProducer
                (long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uStack_a4;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x4d8))
                             (param_1,param_2,*(undefined8 *)(*param_1 + 0x4e0));
  if ((bRam0000000007e2a3ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248,0);
    bRam0000000007e2a3ae = 1;
  }
  puVar1 = PTR_DAT_0777c248;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_06b1d880;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777c248,0xf);
LAB_06b1d880:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 == 4) {
      uVar10 = 1;
    }
    else {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
            goto LAB_06b1d8ec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar1,0xf);
LAB_06b1d8ec:
      iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar10 = (ulong)(iVar3 == 2);
    }
    return uVar10;
  }
  plVar4 = (long *)func_0x03280cac();
  if ((bRam0000000007e2a3af & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a3af = 1;
  }
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_06b1d998;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777e548,7);
LAB_06b1d998:
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar9 != 0) {
      return (ulong)(*(int *)(lVar9 + 0x14) == 1);
    }
  }
  plVar4 = (long *)func_0x03280cac();
  if ((bRam0000000007e2a3b0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a3b0 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
          goto LAB_06b1da4c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777e548,0x10);
LAB_06b1da4c:
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        uVar10 = 0;
      }
      else {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_06b1dabc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar1,7);
LAB_06b1dabc:
        lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (lVar9 == 0) goto LAB_06b1dae4;
        uVar10 = (ulong)(*(int *)(lVar9 + 0x14) == 4);
      }
      return uVar10;
    }
  }
LAB_06b1dae4:
  plVar4 = (long *)func_0x03280cac();
  if ((bRam0000000007e2a3b1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a3b1 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x1b) * 0x10 + 0x138);
          goto LAB_06b1db7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777e548,0x1b);
LAB_06b1db7c:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
            goto LAB_06b1dbe8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777c248,0xf);
LAB_06b1dbe8:
      iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (iVar3 == 8) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x1a) * 0x10 + 0x138);
              goto LAB_06b1dc54;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar1,0x1a);
LAB_06b1dc54:
        lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar10 = (ulong)(lVar9 != 0);
      }
      else {
        uVar10 = 0;
      }
      return uVar10;
    }
  }
  lVar9 = func_0x03280cac();
  if ((bRam0000000007e2a3b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f828);
    func_0x03280a18(PTR_DAT_0782ea90);
    bRam0000000007e2a3b2 = 1;
  }
  puVar2 = PTR_DAT_0782ea90;
  puVar1 = PTR_DAT_0774f828;
  plVar4 = *(long **)(lVar9 + 0x10);
  if (plVar4 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    uStack_a4 = *(undefined4 *)(lVar9 + 0x18);
    uVar8 = func_0x03280b94(*(undefined8 *)puVar1,&uStack_a4);
    uVar10 = func_0x055f7edc(*(undefined8 *)puVar2,uVar7,uVar8,0);
    return uVar10;
  }
  uVar10 = func_0x03280cac();
  puVar1 = PTR_DAT_0777e4f0;
  if ((bRam0000000007e2a3b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e2a3b3 = 1;
  }
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x061049d8(uVar7,0);
  *(undefined8 *)(uVar10 + 0x10) = uVar7;
  func_0x032809c4((undefined8 *)(uVar10 + 0x10),uVar7);
  return uVar10;
}

