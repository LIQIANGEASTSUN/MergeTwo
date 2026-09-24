/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD18D8; Merger.MergeBoard.PowerBoost.Providers.MergeBoardPowerBoostDataProvider.IsPowerBoostable; status ok */


undefined8
Merger_MergeBoard_PowerBoost_Providers_MergeBoardPowerBoostDataProvider__IsPowerBoostable
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  
  if ((bRam0000000007e2aa91 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2aa91 = 1;
  }
  uVar2 = func_0x055f7aac(param_2,0);
  puVar1 = PTR_DAT_0777a498;
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_06bd19a0;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,9);
LAB_06bd19a0:
    plVar8 = (long *)(*(code *)*puVar3)(plVar8,param_2,puVar3[1]);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar5 = *plVar8;
    plVar7 = *(long **)(param_1 + 0x18);
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06bd1a10;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07779820,0);
LAB_06bd1a10:
    uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06bd1a74;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar1,4);
LAB_06bd1a74:
      plVar7 = (long *)(*(code *)*puVar3)(plVar7,uVar4,puVar3[1]);
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06bd1adc;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777e548,0);
LAB_06bd1adc:
      lVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (lVar5 != 0) {
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        if (*(char *)(lVar5 + 0x10) == '\0') {
          return 0;
        }
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_06bd1b64;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777c248,4);
LAB_06bd1b64:
                    /* WARNING: Could not recover jumptable at 0x06bd1b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        return uVar4;
      }
    }
  }
  lVar5 = func_0x03280cac();
  if ((bRam0000000007e2aa92 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833ed0);
    bRam0000000007e2aa92 = 1;
  }
  plVar8 = *(long **)(lVar5 + 0x20);
  if (plVar8 == (long *)0x0) {
    uVar4 = func_0x03280cac();
    return uVar4;
  }
  lVar5 = *plVar8;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07833ed0) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_06bd1c0c;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07833ed0,9);
LAB_06bd1c0c:
                    /* WARNING: Could not recover jumptable at 0x06bd1c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  return uVar4;
}

