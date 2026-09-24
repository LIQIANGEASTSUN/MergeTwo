/* Ghidra 12.1.2 native pseudocode; RVA 0x6A69A94; Merger.MergeBoard.Systems.ImmediateToolsConversionSystem.IsToolbox; status ok */


ulong Merger_MergeBoard_Systems_ImmediateToolsConversionSystem__IsToolbox
                (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000007e2a6b8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b8 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777e548,0xc);
LAB_06b69b1c:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_06b69b7c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0xc);
LAB_06b69b7c:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar4 != 0) {
      return (ulong)(*(char *)(lVar4 + 0x10) != '\0');
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a6b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a6b9 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  if (extraout_x1 == (long *)0x0) {
SUB_057da5fc:
    uVar5 = func_0x03280cac();
    return uVar5;
  }
  lVar4 = *extraout_x1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777e548) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x17) * 0x10 + 0x138);
        goto LAB_06b69c30;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777e548,0x17);
LAB_06b69c30:
  lVar4 = (*(code *)*puVar3)(extraout_x1,puVar3[1]);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *extraout_x1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x17) * 0x10 + 0x138);
          goto LAB_06b69c98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar1,0x17);
LAB_06b69c98:
    lVar4 = (*(code *)*puVar3)(extraout_x1,puVar3[1]);
    if (lVar4 == 0) goto SUB_057da5fc;
    uVar2 = func_0x055f7aac(*(undefined8 *)(lVar4 + 0x10),0);
    uVar2 = uVar2 ^ 1;
  }
  return (ulong)(uVar2 & 1);
}

