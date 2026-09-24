/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.EnergyBoostUtility$$GetBoostLevel RVA 0x214c4c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215c4c8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_0215c610 + 0x215c4dc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c614 + 0x215c4f0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dfa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dfa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245498c(&uStack_30,0,0);
    return uVar9;
  }
  if (param_1 == -1) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0215c618 + 0x215c568)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x180);
          goto LAB_0215c5b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0215c618 + 0x215c568),0x18);
LAB_0215c5b0:
    param_1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 0;
  iVar1 = func_0x01cab92c(iVar1,param_1,0);
  if (iVar1 != 0) {
    uVar9 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar9;
}



// ===== FAT.Merge.EnergyBoostUtility$$AnyEnergyBoostFeatureReady RVA 0x214f07c =====

/* WARNING: Possible PIC construction at 0x0215f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0215f0e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0215f0c8) */
/* WARNING: Removing unreachable block (ram,0x0215f0d0) */
/* WARNING: Removing unreachable block (ram,0x0215f0e0) */
/* WARNING: Removing unreachable block (ram,0x0215f0e8) */
/* WARNING: Removing unreachable block (ram,0x0215f0f8) */
/* WARNING: Removing unreachable block (ram,0x0215f0f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0215f07c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0xb4e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4e7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = 0;
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar9,uVar8,&uStack_30,uVar6);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  pcVar7 = (char *)(_UNK_021625b0 + 0x21623b0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021625b4 + 0x21623c4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xeec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xeec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar9,uVar6,&uStack_38,uVar8,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab92c(iVar1,1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < *(int *)(iVar1 + 0x28)) {
    piVar2 = (int *)FUN_021566f4();
    uVar6 = *(undefined4 *)(iVar1 + 0x28);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_021625b8 + 0x2162498)) {
          puVar3 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0x160);
          goto LAB_021624e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021625b8 + 0x2162498),0x14);
LAB_021624e0:
    iVar9 = (*(code *)*puVar3)(piVar2,uVar6,puVar3[1]);
    if (iVar9 == 0) {
      return 0;
    }
  }
  if (0 < *(int *)(iVar1 + 0x20)) {
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x9c);
    uVar6 = *(undefined4 *)(iVar1 + 0x20);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x01c77708(iVar9,uVar6,0);
    if (iVar9 != 0) {
      return 1;
    }
  }
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x48);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x01dd2b98(iVar9,0);
  return (uint)(*(int *)(iVar1 + 0x14) < 1 || *(int *)(iVar1 + 0x14) <= iVar9);
}



// ===== FAT.Merge.EnergyBoostUtility$$IsMaxToastBoost RVA 0x215224c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216224c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02162390 + 0x216225c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02162394 + 0x2162270));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e08,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e08,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar7 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar7 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar7 = 1;
      }
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar9,uVar8,&uStack_30,uVar7,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02162398 + 0x21622f8)) {
        puVar3 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0x180);
        goto LAB_02162340;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02162398 + 0x21622f8),0x18);
LAB_02162340:
  uVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 0;
  iVar1 = func_0x01cab92c(iVar1,uVar7,0);
  if ((iVar1 != 0) && (uVar8 = 0, *(char *)(iVar1 + 0x26) != '\0')) {
    uVar8 = 1;
  }
  return uVar8;
}



// ===== FAT.Merge.EnergyBoostUtility$$FeatureReady RVA 0x215239c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216239c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_021625b0 + 0x21623b0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021625b4 + 0x21623c4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xeec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xeec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  uVar4 = 1;
  if (param_1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x01cab92c(iVar1,param_1,0);
    if (iVar1 != 0) {
      if (0 < *(int *)(iVar1 + 0x28)) {
        piVar2 = (int *)FUN_021566f4();
        uVar9 = *(undefined4 *)(iVar1 + 0x28);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_021625b8 + 0x2162498)) {
              puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x160);
              goto LAB_021624e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021625b8 + 0x2162498),0x14);
LAB_021624e0:
        iVar8 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
        if (iVar8 == 0) {
          return 0;
        }
      }
      if (0 < *(int *)(iVar1 + 0x20)) {
        iVar8 = func_0x01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0x9c);
        uVar9 = *(undefined4 *)(iVar1 + 0x20);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01c77708(iVar8,uVar9,0);
        if (iVar8 != 0) {
          return 1;
        }
      }
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x48);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01dd2b98(iVar8,0);
      return (uint)(*(int *)(iVar1 + 0x14) < 1 || *(int *)(iVar1 + 0x14) <= iVar8);
    }
  }
  return uVar4;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetEnergyProduceReason RVA 0x21525bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021625bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_021626c8 + 0x21625d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021626cc + 0x21625e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de1,0);
  if (iVar1 == 0) {
    switch(param_1) {
    case 1:
      iVar1 = 0x84;
      piVar4 = *(int **)(_UNK_021626d0 + 0x2162668);
      break;
    case 2:
      iVar1 = 0x88;
      piVar4 = *(int **)(&UNK_02162688 + _UNK_021626d4);
      break;
    case 3:
      iVar1 = 0x8c;
      piVar4 = *(int **)(&UNK_02162698 + _UNK_021626d8);
      break;
    case 4:
      iVar1 = 0x90;
      piVar4 = *(int **)(_UNK_021626dc + 0x21626a8);
      break;
    default:
      iVar1 = 0x80;
      piVar4 = *(int **)(&UNK_02162678 + _UNK_021626e0);
    }
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar4;
    }
    return *(undefined4 *)(*(int *)(iVar5 + 0x5c) + iVar1);
  }
  iVar1 = func_0x0229f13c(0x9de1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_02285c1c + 0x2285b3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02285c20 + 0x2285b50),param_1,0);
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485238(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02285c24 + 0x2285c0c));
  return uVar6;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetEnergyProduceReasonByMultiplier RVA 0x21526e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021626e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_021627f0 + 0x21626f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021627f4 + 0x216270c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e03,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e03,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02285c1c + 0x2285b3c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02285c20 + 0x2285b50),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02285c24 + 0x2285c0c));
    return uVar6;
  }
  if (param_1 < 5) {
    if (param_1 == 2) {
      iVar1 = 0x84;
      piVar4 = *(int **)(_UNK_02162800 + 0x21627d0);
      goto LAB_021627cc;
    }
    if (param_1 == 4) {
      iVar1 = 0x88;
      piVar4 = *(int **)(_UNK_021627f8 + 0x21627a0);
      goto LAB_021627cc;
    }
  }
  else {
    if (param_1 == 8) {
      iVar1 = 0x8c;
      piVar4 = *(int **)(_UNK_02162804 + 0x21627c0);
      goto LAB_021627cc;
    }
    if (param_1 == 0x10) {
      iVar1 = 0x90;
      piVar4 = *(int **)(_UNK_021627fc + 0x2162780);
      goto LAB_021627cc;
    }
  }
  iVar1 = 0x80;
  piVar4 = *(int **)(_UNK_02162808 + 0x21627b0);
LAB_021627cc:
  iVar5 = *piVar4;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar4;
  }
  return *(undefined4 *)(*(int *)(iVar5 + 0x5c) + iVar1);
}



// ===== FAT.Merge.EnergyBoostUtility$$IsBoost RVA 0x215280c =====

uint FUN_0216280c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xef4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xef4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(param_1 != 0);
}



// ===== FAT.Merge.EnergyBoostUtility$$GetEnergyRate RVA 0x2152868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02162868(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_021629ac + 0x216287c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021629b0 + 0x2162890));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xef5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xef5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245498c(&uStack_30,0,0);
    return uVar9;
  }
  if (param_1 == -1) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_021629b4 + 0x2162908)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x180);
          goto LAB_02162950;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021629b4 + 0x2162908),0x18);
LAB_02162950:
    param_1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab92c(iVar1,param_1,0);
  if (iVar1 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar9;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetBoardDetailKeyForBoostState RVA 0x21529b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021629b8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_02162be0 + 0x21629d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02162be4 + 0x21629e4));
    func_0x01384978(*(undefined4 *)(_UNK_02162be8 + 0x21629f0));
    func_0x01384978(*(undefined4 *)(_UNK_02162bec + 0x21629fc));
    func_0x01384978(*(undefined4 *)(_UNK_02162bf0 + 0x2162a08));
    func_0x01384978(*(undefined4 *)(_UNK_02162bf4 + 0x2162a14));
    func_0x01384978(*(undefined4 *)(_UNK_02162bf8 + 0x2162a20));
    func_0x01384978(*(undefined4 *)(_UNK_02162bfc + 0x2162a2c));
    func_0x01384978(*(undefined4 *)(_UNK_02162c00 + 0x2162a38));
    func_0x01384978(*(undefined4 *)(_UNK_02162c04 + 0x2162a44));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x775e,0);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02162c08 + 0x2162ab4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x180);
          goto LAB_02162afc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02162c08 + 0x2162ab4),0x18);
LAB_02162afc:
    uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    switch(uVar4) {
    case 1:
      uVar4 = **(undefined4 **)(&UNK_02162b40 + _UNK_02162c0c);
      puVar3 = *(undefined4 **)(_UNK_02162c10 + 0x2162b4c);
      break;
    case 2:
      uVar4 = **(undefined4 **)(&UNK_02162b70 + _UNK_02162c14);
      puVar3 = *(undefined4 **)(&UNK_02162b7c + _UNK_02162c18);
      break;
    case 3:
      uVar4 = **(undefined4 **)(&UNK_02162b88 + _UNK_02162c1c);
      puVar3 = *(undefined4 **)(&UNK_02162b94 + _UNK_02162c20);
      break;
    case 4:
      uVar4 = **(undefined4 **)(&UNK_02162ba0 + _UNK_02162c24);
      puVar3 = *(undefined4 **)(_UNK_02162c28 + 0x2162bac);
      break;
    default:
      uVar4 = **(undefined4 **)(_UNK_02162c2c + 0x2162b58);
      puVar3 = *(undefined4 **)(&UNK_02162b64 + _UNK_02162c30);
    }
    uStack_14 = 0;
    uStack_18 = 0;
    func_0x0390b3bc(&uStack_18,uVar4,*puVar3,**(undefined4 **)(_UNK_02162c34 + 0x2162bb8));
  }
  else {
    iVar1 = func_0x0229f13c(0x775e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02251fc4(&uStack_18,iVar1,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetEnergyBoostTipText RVA 0x2152c38 =====

/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02162c38(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *unaff_r5;
  undefined4 uVar8;
  char *pcVar9;
  char *unaff_r6;
  int iVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  uint unaff_r11;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_02162f3c + 0x2162c4c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02162f40 + 0x2162c60));
    func_0x01384978(*(undefined4 *)(_UNK_02162f44 + 0x2162c6c));
    func_0x01384978(*(undefined4 *)(_UNK_02162f48 + 0x2162c78));
    func_0x01384978(*(undefined4 *)(_UNK_02162f4c + 0x2162c84));
    func_0x01384978(*(undefined4 *)(_UNK_02162f50 + 0x2162c90));
    func_0x01384978(*(undefined4 *)(_UNK_02162f54 + 0x2162c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02162f58 + 0x2162ca8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa879,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa879,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021788ac + 0x21787dc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021788b0 + 0x21787f0),0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar8 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar8 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar8 = 1;
      }
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar10,uVar7,&uStack_30,uVar8,0,0);
    uVar8 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021788b4 + 0x217889c));
    return uVar8;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02162f5c + 0x2162d18)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x180);
        goto LAB_02162d60;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02162f5c + 0x2162d18),0x18);
LAB_02162d60:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar10 = func_0x02162f88();
  uVar8 = FUN_02162868(iVar1);
  if ((iVar1 < 2) || (iVar1 != iVar10)) {
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02162f80 + 0x2162f10) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar18 = (ulonglong)**(uint **)(_UNK_02162f84 + 0x2162f30);
      puVar12 = (undefined1 *)register0x00000054;
SUB_028c1350:
      pcVar6 = (char *)uVar18;
      *(undefined4 *)(puVar12 + -4) = unaff_lr;
      *(uint *)(puVar12 + -8) = unaff_r11;
      *(undefined1 **)(puVar12 + -0xc) = unaff_r5;
      piVar2 = (int *)(puVar12 + -0x10);
      *piVar2 = unaff_r4;
      pcVar9 = (char *)(_UNK_028c13f0 + 0x28c1364);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar18 >> 0x20));
        *pcVar9 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xbb,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xbb,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar2;
        uVar8 = *(undefined4 *)(puVar12 + -0xc);
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(puVar12 + -4);
        *(undefined4 **)(puVar12 + -8) = unaff_r8;
        *(undefined4 *)(puVar12 + -0xc) = unaff_r7;
        *piVar2 = (int)unaff_r6;
        *(undefined4 *)(puVar12 + -0x14) = uVar8;
        *(int *)(puVar12 + -0x18) = iVar10;
        pcVar9 = (char *)(_UNK_02173f74 + 0x2173e94);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),pcVar6,0);
          *pcVar9 = '\x01';
        }
        *(undefined4 *)(puVar12 + -0x30) = 0;
        *(undefined4 *)(puVar12 + -0x2c) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        *(undefined4 *)(puVar12 + -0x28) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        *(undefined4 *)(puVar12 + -0x24) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        *(undefined4 *)(puVar12 + -0x20) = 0;
        func_0x0245494c(puVar12 + -0x48,0);
        iVar10 = *(int *)(iVar1 + 0x10);
        *(undefined4 *)(puVar12 + -0x30) = *(undefined4 *)(puVar12 + -0x48);
        *(undefined4 *)(puVar12 + -0x2c) = *(undefined4 *)(puVar12 + -0x44);
        *(undefined4 *)(puVar12 + -0x28) = *(undefined4 *)(puVar12 + -0x40);
        *(undefined4 *)(puVar12 + -0x24) = *(undefined4 *)(puVar12 + -0x3c);
        *(undefined4 *)(puVar12 + -0x20) = *(undefined4 *)(puVar12 + -0x38);
        if (iVar10 != 0) {
          func_0x01485278(puVar12 + -0x30,iVar10,0);
        }
        func_0x01485278(puVar12 + -0x30,pcVar6,0);
        iVar10 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 2;
        if (iVar1 == 0) {
          uVar7 = 1;
        }
        *(undefined4 *)(puVar12 + -0x50) = 0;
        *(undefined4 *)(puVar12 + -0x4c) = 0;
        func_0x0245495c(iVar10,uVar8,puVar12 + -0x30,uVar7);
        uVar8 = func_0x02f5db90(puVar12 + -0x30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
        return uVar8;
      }
      if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      unaff_r4 = *piVar2;
      unaff_r11 = *(uint *)(puVar12 + -8);
      uVar8 = *(undefined4 *)(puVar12 + -4);
      iVar1 = *(int *)(puVar12 + -0xc);
      pcVar9 = unaff_r10;
      puVar11 = puVar12;
      do {
        unaff_r10 = pcVar6;
        *(undefined4 *)(puVar11 + -4) = uVar8;
        *(char **)(puVar11 + -8) = pcVar9;
        *(int **)(puVar11 + -0xc) = unaff_r9;
        *(undefined4 **)(puVar11 + -0x10) = unaff_r8;
        *(undefined4 *)(puVar11 + -0x14) = unaff_r7;
        *(char **)(puVar11 + -0x18) = unaff_r6;
        *(int *)(puVar11 + -0x1c) = iVar1;
        *(int *)(puVar11 + -0x20) = unaff_r4;
        unaff_r5 = (undefined1 *)0x1;
        unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
        if (*unaff_r6 == '\0') {
          func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
          func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
          func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
          func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
          func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
          func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
          func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
          *unaff_r6 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xc,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xc,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x02173c38(iVar1,unaff_r10,1,0);
          return uVar8;
        }
        unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
        *(undefined4 *)(puVar11 + -0x24) = *unaff_r8;
        iVar1 = func_0x0467229c(unaff_r10,0);
        if (iVar1 != 0) {
          return *unaff_r8;
        }
        unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar10 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar10 == 0) goto LAB_028c125c;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar10 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
          bVar14 = iVar10 == 0;
          bVar13 = true;
          if (bVar14) goto LAB_028c1304;
        }
        iVar1 = *(int *)(iVar10 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03e1fee8(iVar1,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
        if (0 < iVar1) {
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                                  **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
          if (iVar1 != 0) goto LAB_028c125c;
        }
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0x14) == 0) {
LAB_028c10a0:
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0x10) != 0) {
            iVar1 = *unaff_r9;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *unaff_r9;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                                    **(undefined4 **)(iRam028c133c + 0x28c1128));
            if (iVar1 != 0) goto LAB_028c1138;
          }
        }
        else {
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                                  **(undefined4 **)(iRam028c1338 + 0x28c1090));
          if (iVar1 == 0) goto LAB_028c10a0;
LAB_028c1138:
          iVar1 = func_0x0467229c(*(undefined4 *)(puVar11 + -0x24),0);
          if (iVar1 == 0) goto LAB_028c12f8;
        }
        if (unaff_r10 == (char *)0x0) {
          func_0x01384bf0();
          iVar1 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
          if (iVar1 < 0) {
LAB_028c125c:
            uVar8 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
            return uVar8;
          }
          func_0x01384bf0();
          iVar1 = func_0x04676d38(0,0x2c,0);
          if (iVar1 < 0) goto LAB_028c125c;
          func_0x01384bf0();
        }
        else {
          iVar1 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
          if ((iVar1 < 0) || (iVar1 = func_0x04676d38(unaff_r10,0x2c,0), iVar1 < 0))
          goto LAB_028c125c;
        }
        unaff_r7 = 0;
        unaff_r4 = func_0x04674540(unaff_r10,0x2c,0,0);
        if (unaff_r4 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(unaff_r4 + 0xc) < 1) {
          uVar8 = func_0x04672b68(*unaff_r8,unaff_r4,0);
          iVar1 = *unaff_r9;
          *(undefined4 *)(puVar11 + -0x24) = uVar8;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          uVar8 = *(undefined4 *)(puVar11 + -0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03e201a8(iVar1,unaff_r10,uVar8,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
          return *(undefined4 *)(puVar11 + -0x24);
        }
        if (*(int *)(unaff_r4 + 0xc) == 0) {
          func_0x01384bf4();
        }
        unaff_r6 = *(char **)(unaff_r4 + 0x10);
        if (*(int *)(*unaff_r9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = 0x28c123c;
        pcVar6 = unaff_r6;
        iVar1 = unaff_r4;
        pcVar9 = unaff_r10;
        puVar11 = puVar11 + -0x28;
      } while( true );
    }
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02162f70 + 0x2162e58),1);
    uStack_18 = uVar8;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02162f74 + 0x2162e70),&uStack_18);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_02162f78 + 0x2162ed4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar3 = *(undefined4 **)(_UNK_02162f7c + 0x2162ef0);
  }
  else {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02162f60 + 0x2162da8),1);
    uStack_14 = uVar8;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02162f64 + 0x2162dc0),&uStack_14);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_02162f68 + 0x2162e24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar3 = *(undefined4 **)(_UNK_02162f6c + 0x2162e40);
  }
  uVar8 = func_0x028c1688(*puVar3,piVar2,0);
  return uVar8;
LAB_028c1304:
  unaff_lr = 0x28c1308;
  uVar18 = func_0x01384bf0();
  bVar16 = bVar13;
  if (bVar14) {
    unaff_r10 = (char *)0x43fa;
    bVar16 = 0x28000000 < unaff_r11 || unaff_r11 + 0xd8000000 < (uint)bVar13;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar13 + 0x28000000;
  bVar13 = bVar16;
  if (bVar14) {
    bVar13 = &__DT_REL[0x5d26].r_info < puVar11 + -0x28 ||
             puVar11 + -0x70028 < (undefined1 *)(uint)bVar16;
  }
  bVar14 = bVar14 && puVar11 + -0x28 == (undefined1 *)(!bVar16 + 0x70000);
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0xc000000 < unaff_r11 || unaff_r11 + 0xf4000000 < (uint)bVar13;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14 && unaff_r11 == !bVar13 + 0xc000000) {
    bVar17 = (undefined1 *)0x2b0 < puVar11 + -0x28 || puVar11 + -0x2d8 < (undefined1 *)(uint)bVar16;
    unaff_r5 = puVar11 + (-0x28 - (!bVar16 + 0x2b0));
    bVar15 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar14 = false;
  bVar13 = bVar17;
  if (bVar15) {
    bVar13 = (undefined1 *)0x48000000 < puVar11 + -0x28 ||
             puVar11 + -0x48000028 < (undefined1 *)(uint)bVar17;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar17 + 0x48000000)));
    bVar14 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0x428c1325 < bVar13;
  }
  bVar14 = bVar14 && !bVar13 == 0x428c1325;
  bVar13 = bVar16;
  if (bVar14) {
    bVar13 = 0x90000003 < unaff_r11 || unaff_r11 + 0x6ffffffd < (uint)bVar16;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar16 + 0x90000003;
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0x10000002 < unaff_r11 || unaff_r11 + 0xeffffffe < (uint)bVar13;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14 && unaff_r11 == !bVar13 + 0x10000002) {
    bVar17 = puVar11 != (undefined1 *)0x28 || puVar11 + -0x28 < (undefined1 *)(uint)bVar16;
    unaff_r5 = puVar11 + (-0x28 - (uint)!bVar16);
    bVar15 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar14 = bVar17;
  if (bVar15) {
    bVar14 = &UNK_03d00000 < puVar11 + -0x28 || puVar11 + -0x3d00028 < (undefined1 *)(uint)bVar17;
  }
  bVar13 = bVar14;
  if (bVar15 && puVar11 + -0x28 == &UNK_03d00000 + !bVar17) {
    bVar13 = 0x40000009 < unaff_r11 || unaff_r11 + 0xbffffff7 < (uint)bVar14;
  }
  bVar16 = (bVar15 && puVar11 + -0x28 == &UNK_03d00000 + !bVar17) &&
           unaff_r11 == !bVar14 + 0x40000009;
  bVar14 = bVar13;
  if (bVar16) {
    bVar14 = 0x3f < unaff_r11 || unaff_r11 - 0x3f < (uint)bVar13;
  }
  bVar16 = bVar16 && unaff_r11 == !bVar13 + 0x3f;
  bVar13 = bVar14;
  if (bVar16) {
    bVar13 = 0x19 < unaff_r11 || unaff_r11 - 0x19 < (uint)bVar14;
  }
  bVar15 = false;
  bVar17 = bVar13;
  if (bVar16 && unaff_r11 == !bVar14 + 0x19) {
    bVar17 = (undefined1 *)0xe < puVar11 + -0x28 || puVar11 + -0x36 < (undefined1 *)(uint)bVar13;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar13 + 0xe)));
    bVar15 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = false;
  bVar13 = bVar17;
  if (bVar15) {
    bVar13 = (undefined1 *)0x1e < puVar11 + -0x28 || puVar11 + -0x46 < (undefined1 *)(uint)bVar17;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar17 + 0x1e)));
    bVar14 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar16 = false;
  if (bVar14) {
    unaff_r11 = unaff_r11 - (!bVar13 + 0x260);
    bVar16 = unaff_r11 == 0;
  }
  puVar12 = puVar11 + -0x28;
  if (bVar16) {
    puVar12 = puVar11 + -0x28;
  }
  goto SUB_028c1350;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetHighestAvailableState RVA 0x2152f88 =====

undefined4 FUN_02162f88(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7617,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7617,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar2 = func_0x0245498c(&uStack_30,0,0);
    return uVar2;
  }
  uVar2 = 4;
  iVar1 = func_0x021631d4(4);
  if (iVar1 == 0) {
    uVar2 = 3;
    iVar1 = func_0x021631d4(3);
    if (iVar1 == 0) {
      uVar2 = 2;
      iVar1 = func_0x021631d4(2);
      if (iVar1 == 0) {
        uVar2 = func_0x021631d4(1);
        return uVar2;
      }
    }
  }
  return uVar2;
}



// ===== FAT.Merge.EnergyBoostUtility$$OnLoginAdjustBetState RVA 0x215301c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216301c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_021631b0 + 0x2163038);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021631b4 + 0x216304c));
    func_0x01384978(*(undefined4 *)(_UNK_021631b8 + 0x2163058));
    func_0x01384978(*(undefined4 *)(_UNK_021631bc + 0x2163064));
    func_0x01384978(*(undefined4 *)(_UNK_021631c0 + 0x2163070));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xeeb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xeeb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    iStack_28 = iStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = iVar1;
    uVar2 = func_0x0245496c(&uStack_38,1,0);
    return uVar2;
  }
  *param_2 = param_1;
  iVar1 = FUN_0216239c(param_1);
  iVar5 = *param_2;
  iStack_2c = param_1;
  if (iVar1 == 0) {
    puVar8 = *(undefined4 **)(_UNK_021631c4 + 0x21630f0);
    piVar9 = *(int **)(_UNK_021631c8 + 0x21630f8);
    puVar10 = *(undefined4 **)(_UNK_021631cc + 0x2163100);
    piVar7 = *(int **)(_UNK_021631d0 + 0x2163108);
    do {
      iVar1 = *piVar9;
      *param_2 = iVar5 + -1;
      uVar6 = *puVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x0244ff60(uVar6,0);
      iStack_28 = *param_2;
      uVar3 = func_0x01384abc(*puVar10,&iStack_28);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02452e4c(uVar6,uVar3,0);
      if (iVar1 == 0) {
        *param_2 = 0;
        return 1;
      }
      iVar1 = FUN_0216239c(*param_2);
      iVar5 = *param_2;
    } while (iVar1 == 0);
  }
  return (uint)(iVar5 != iStack_2c);
}



// ===== FAT.Merge.EnergyBoostUtility$$CanSwitchToState RVA 0x21531d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021631d4(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x7618,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7618,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  pcVar7 = (char *)(_UNK_021625b0 + 0x21623b0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021625b4 + 0x21623c4));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xeec,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xeec,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  uVar4 = 1;
  if (param_1 != 0) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar3 = func_0x01cab92c(iVar3,param_1,0);
    if (iVar3 != 0) {
      if (0 < *(int *)(iVar3 + 0x28)) {
        piVar1 = (int *)FUN_021566f4();
        uVar9 = *(undefined4 *)(iVar3 + 0x28);
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_021625b8 + 0x2162498)) {
              puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x160);
              goto LAB_021624e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021625b8 + 0x2162498),0x14);
LAB_021624e0:
        iVar8 = (*(code *)*puVar2)(piVar1,uVar9,puVar2[1]);
        if (iVar8 == 0) {
          return 0;
        }
      }
      if (0 < *(int *)(iVar3 + 0x20)) {
        iVar8 = func_0x01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0x9c);
        uVar9 = *(undefined4 *)(iVar3 + 0x20);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01c77708(iVar8,uVar9,0);
        if (iVar8 != 0) {
          return 1;
        }
      }
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x48);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01dd2b98(iVar8,0);
      return (uint)(*(int *)(iVar3 + 0x14) < 1 || *(int *)(iVar3 + 0x14) <= iVar8);
    }
  }
  return uVar4;
}



// ===== FAT.Merge.EnergyBoostUtility$$TryMarkTipTriggeredForHighest RVA 0x215322c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216322c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_0216332c + 0x2163240);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02163330 + 0x2163254));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x761b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x761b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 == 4) {
    iVar1 = *(int *)(**(int **)(_UNK_0216333c + 0x21632ec) + 0x5c);
    bVar7 = *(char *)(iVar1 + 2) == '\0';
    uVar4 = (uint)bVar7;
    if (bVar7) {
      *(undefined1 *)(iVar1 + 2) = 1;
    }
  }
  else if (param_1 == 3) {
    iVar1 = *(int *)(**(int **)(_UNK_02163338 + 0x2163310) + 0x5c);
    bVar7 = *(char *)(iVar1 + 1) == '\0';
    uVar4 = (uint)bVar7;
    if (bVar7) {
      *(undefined1 *)(iVar1 + 1) = 1;
    }
  }
  else if (param_1 == 2) {
    pcVar3 = *(char **)(**(int **)(_UNK_02163334 + 0x21632c8) + 0x5c);
    bVar7 = *pcVar3 == '\0';
    uVar4 = (uint)bVar7;
    if (bVar7) {
      *pcVar3 = '\x01';
    }
  }
  return uVar4;
}



// ===== FAT.Merge.EnergyBoostUtility$$SwitchBetState RVA 0x2153340 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02163340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1004,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1004,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  pcVar3 = (char *)(_UNK_021634ec + 0x21633b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021634f0 + 0x21633c4));
    func_0x01384978(*(undefined4 *)(_UNK_021634f4 + 0x21633d0));
    func_0x01384978(*(undefined4 *)(_UNK_021634f8 + 0x21633dc));
    func_0x01384978(*(undefined4 *)(_UNK_021634fc + 0x21633e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1005,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1005,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  puVar7 = *(undefined4 **)(_UNK_02163500 + 0x2163448);
  puVar8 = *(undefined4 **)(_UNK_02163504 + 0x2163450);
  piVar6 = *(int **)(_UNK_02163508 + 0x2163458);
  do {
    uVar5 = *puVar7;
    if (*(int *)(**(int **)(_UNK_0216350c + 0x2163460) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = param_1 + 1;
    uVar5 = func_0x0244ff60(uVar5,0);
    iStack_28 = param_1;
    uVar2 = func_0x01384abc(*puVar8,&iStack_28);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x02452e4c(uVar5,uVar2,0);
    iVar1 = 0;
  } while ((iVar4 != 0) && (iVar4 = FUN_0216239c(param_1), iVar1 = param_1, iVar4 == 0));
  return iVar1;
}



// ===== FAT.Merge.EnergyBoostUtility$$SwitchBetState RVA 0x2153398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02163398(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_021634ec + 0x21633b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021634f0 + 0x21633c4));
    func_0x01384978(*(undefined4 *)(_UNK_021634f4 + 0x21633d0));
    func_0x01384978(*(undefined4 *)(_UNK_021634f8 + 0x21633dc));
    func_0x01384978(*(undefined4 *)(_UNK_021634fc + 0x21633e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1005,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1005,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  puVar7 = *(undefined4 **)(_UNK_02163500 + 0x2163448);
  puVar8 = *(undefined4 **)(_UNK_02163504 + 0x2163450);
  piVar6 = *(int **)(_UNK_02163508 + 0x2163458);
  do {
    uVar5 = *puVar7;
    if (*(int *)(**(int **)(_UNK_0216350c + 0x2163460) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = param_1 + 1;
    uVar5 = func_0x0244ff60(uVar5,0);
    iStack_28 = param_1;
    uVar2 = func_0x01384abc(*puVar8,&iStack_28);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x02452e4c(uVar5,uVar2,0);
    iVar1 = 0;
  } while ((iVar4 != 0) && (iVar4 = FUN_0216239c(param_1), iVar1 = param_1, iVar4 == 0));
  return iVar1;
}



// ===== FAT.Merge.EnergyBoostUtility$$IsReplaceEnabled RVA 0x2153510 =====

undefined4 FUN_02163510(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9dfc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dfc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01cab92c(iVar1,param_1,0);
  if ((iVar1 != 0) && (uVar4 = 0, *(char *)(iVar1 + 0x24) != '\0')) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetEnergyBoostedItemId RVA 0x21535b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021635b4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_02163784 + 0x21635d4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02163788 + 0x21635ec));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dfb,0);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar9 = *(int **)(_UNK_0216378c + 0x216366c);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar5 = *piVar9;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar5) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x180);
          goto LAB_021636b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0x18);
LAB_021636b4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar1 = FUN_02163510();
    if (iVar1 == 0) {
      uVar4 = FUN_02162868(0xffffffff);
      *param_3 = uVar4;
      *param_4 = 0;
      piVar2 = (int *)FUN_021566f4();
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      iVar5 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar5) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x188);
            goto LAB_02163764;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0x19);
LAB_02163764:
                    /* WARNING: Could not recover jumptable at 0x02163780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(piVar2,param_1,param_2,puVar3[1]);
      return;
    }
    func_0x02163790(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9dfb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022860e4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.EnergyBoostUtility$$ProcessEnergySpecialLogic RVA 0x2153790 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02163790(undefined4 param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uStack_38;
  int iStack_34;
  int aiStack_30 [4];
  
  pcVar8 = (char *)(_UNK_02163ae8 + 0x21637b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02163aec + 0x21637c8));
    *pcVar8 = '\x01';
  }
  aiStack_30[3] = 0;
  aiStack_30[2] = 0;
  aiStack_30[1] = 0;
  aiStack_30[0] = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9dfd,0);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar9 = *(int **)(_UNK_02163af0 + 0x2163864);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x180);
          goto LAB_021638ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0x18);
LAB_021638ac:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    uVar4 = FUN_02162868(0xffffffff);
    *param_3 = uVar4;
    *param_4 = 0;
    if ((param_2 < 1) || (iVar1 == 0)) {
      *param_3 = 1;
      iVar1 = param_1;
      if (0 < param_2) {
        piVar2 = (int *)FUN_021566f4();
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x188);
              goto LAB_021639f0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0x19);
LAB_021639f0:
        iVar1 = (*(code *)*puVar3)(piVar2,param_1,param_2,puVar3[1]);
      }
    }
    else {
      iVar1 = func_0x02163af4(param_1,param_2,aiStack_30 + 3,aiStack_30 + 2);
      if (iVar1 == 0) {
        piVar2 = (int *)FUN_021566f4();
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x188);
              goto LAB_02163a24;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0x19);
LAB_02163a24:
        iVar1 = (*(code *)*puVar3)(piVar2,param_1,param_2,puVar3[1]);
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x50);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x01db1798(iVar5,param_1,aiStack_30 + 1,aiStack_30,0);
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x50);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x01db1798(iVar5,iVar1,&uStack_38,&iStack_34,0);
        if (iStack_34 < aiStack_30[0] + param_2) {
          uVar4 = func_0x02163c64();
          *param_3 = uVar4;
        }
      }
      else {
        uVar4 = func_0x02163c64(aiStack_30[2]);
        *param_3 = uVar4;
        *param_4 = 1;
        iVar1 = aiStack_30[3];
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9dfd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x022860e4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.Merge.EnergyBoostUtility$$TryFindBestOutputForOrders RVA 0x2153af4 =====

undefined4 FUN_02163af4(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  iVar1 = func_0x0229f06c(0x9dfe,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x01db1798(iVar1,param_1,&uStack_24,&uStack_28,0);
    if (-1 < param_2 + -1) {
      do {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = uStack_24;
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01db20e8(iVar1,uVar2,param_2,&uStack_29,0);
        if ((0 < iVar1) && (iVar3 = func_0x02163cd8(), iVar3 != 0)) {
          *param_3 = iVar1;
          *param_4 = param_2 + -1;
          return 1;
        }
        uVar4 = param_2 - 2;
        param_2 = param_2 + -1;
      } while (uVar4 < 0x80000000);
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9dfe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285f90(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.EnergyBoostUtility$$CalculateEnergyMultiplierByLevel RVA 0x2153c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02163c64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9e02,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e02,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 - 1U < 4) {
    return *(undefined4 *)(_UNK_02163cd4 + 0x2163cc8 + (param_1 - 1U) * 4);
  }
  return 1;
}



// ===== FAT.Merge.EnergyBoostUtility$$IsItemNeededByOrders RVA 0x2153cd8 =====

/* WARNING: Possible PIC construction at 0x021643b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021643b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02163cd8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  int iStack_20;
  int aiStack_1c [3];
  
  pcVar9 = (char *)(_UNK_02163e70 + 0x2163cec);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02163e74 + 0x2163d00));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dff,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    piVar2 = (int *)func_0x02163e7c();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02163e78 + 0x2163da4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
            goto LAB_02163e50;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02163e78 + 0x2163da4),1);
LAB_02163e50:
                    /* WARNING: Could not recover jumptable at 0x02163e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
      return uVar10;
    }
    if (iVar1 != 0) {
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01db7b78(iVar5,0);
      if ((iVar1 != iVar5) && (iVar1 = FUN_02141ef4(iVar1,0), iVar1 == 0)) {
        return 0;
      }
    }
    pcVar9 = (char *)(_UNK_021645a4 + 0x2164334);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021645a8 + 0x2164348));
      func_0x01384978(*(undefined4 *)(_UNK_021645ac + 0x2164354));
      func_0x01384978(*(undefined4 *)(_UNK_021645b0 + 0x2164360));
      *pcVar9 = '\x01';
    }
    aiStack_1c[0] = 0;
    iStack_20 = 0;
    iVar1 = func_0x0229f06c(0x9e01,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      iVar1 = func_0x01e6c228(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_021645b4 + 0x216441c);
      iVar1 = func_0x03d5bb20(iVar1,param_1,aiStack_1c,*puVar3);
      if ((iVar1 == 0) || (aiStack_1c[0] != 1)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x01e6b664(iVar1,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_021645b8 + 0x2164488)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x138);
              goto LAB_021644d0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021645b8 + 0x2164488),0xf);
LAB_021644d0:
        iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03d5bb20(iVar1,param_1,&iStack_20,*puVar3);
        uVar10 = 0;
        if ((iVar1 != 0) && (0 < iStack_20)) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar10 = 0;
          iVar1 = func_0x01db7bcc(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar8 = FUN_0214da98(iVar1,0);
          iVar1 = func_0x02f7c01c(uVar8,param_1,0,**(undefined4 **)(_UNK_021645bc + 0x2164580));
          if (0 < iStack_20 - iVar1) {
            uVar10 = 1;
          }
        }
      }
      return uVar10;
    }
    iVar1 = func_0x0229f13c(0x9e01,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x21643b4;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x9dff,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar5 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 2;
  if (iVar1 == 0) {
    uVar8 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar5,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar8);
  uVar10 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar10;
}



// ===== FAT.Merge.EnergyBoostUtility$$GetCurrentActivityOrderProvider RVA 0x2153e7c =====

/* WARNING: Removing unreachable block (ram,0x02164178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02163e7c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r1;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_021642c4 + 0x2163e90);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021642c8 + 0x2163ea4));
    func_0x01384978(*(undefined4 *)(_UNK_021642cc + 0x2163eb0));
    func_0x01384978(*(undefined4 *)(_UNK_021642d0 + 0x2163ebc));
    func_0x01384978(*(undefined4 *)(_UNK_021642d4 + 0x2163ec8));
    func_0x01384978(*(undefined4 *)(_UNK_021642d8 + 0x2163ed4));
    func_0x01384978(*(undefined4 *)(_UNK_021642dc + 0x2163ee0));
    func_0x01384978(*(undefined4 *)(_UNK_021642e0 + 0x2163eec));
    func_0x01384978(*(undefined4 *)(_UNK_021642e4 + 0x2163ef8));
    func_0x01384978(*(undefined4 *)(_UNK_021642e8 + 0x2163f04));
    func_0x01384978(*(undefined4 *)(_UNK_021642ec + 0x2163f10));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  iVar1 = func_0x0229f06c(0x9e00,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)0x0;
    iVar1 = func_0x01dbb000(iVar1,0);
    if (iVar1 != 0) {
      iVar8 = 0;
      iVar1 = FUN_02139cf4(iVar1,0);
      if ((iVar1 != 0) && (iVar8 = *(int *)(iVar1 + 8), iVar8 == 1)) {
        return (int *)0x0;
      }
      piVar2 = (int *)0x0;
      uVar11 = func_0x01c24918(0);
      iVar1 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        func_0x01384bf0();
        iVar1 = extraout_r1;
      }
      iVar3 = *(int *)((int)uVar11 + 0xd8);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 != 0 && iVar1 != 0) {
        func_0x03dcf754(&uStack_68,iVar1,**(undefined4 **)(_UNK_021642f0 + 0x2164030));
        uStack_40 = uStack_68;
        uStack_3c = uStack_64;
        uStack_38 = uStack_60;
        uStack_34 = uStack_5c;
        uStack_30 = uStack_58;
        puVar10 = *(undefined4 **)(_UNK_021642f4 + 0x216405c);
        piVar9 = *(int **)(_UNK_021642f8 + 0x2164064);
        do {
          iVar1 = func_0x03fa87cc(&uStack_40,**(undefined4 **)(_UNK_02164304 + 0x216406c));
          if (iVar1 == 0) {
            func_0x03fa890c(&uStack_40,**(undefined4 **)(_UNK_02164308 + 0x21641d0));
            return (int *)0x0;
          }
          iVar1 = (int)uStack_30;
          if ((int)uStack_30 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_021642fc + 0x2164098));
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          do {
            do {
              iVar1 = func_0x03f5f428(&uStack_50,*puVar10);
              if (iVar1 == 0) {
                iVar1 = 10;
                piVar2 = (int *)0x0;
                goto LAB_0216415c;
              }
              piVar2 = (int *)func_0x01384ab8(uStack_44,*piVar9);
            } while (piVar2 == (int *)0x0);
            iVar1 = *piVar2;
            iVar3 = *piVar9;
            uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar6[-1] == iVar3) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                  goto LAB_0216412c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar3,0);
LAB_0216412c:
            iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
          } while (iVar1 != iVar8);
          iVar1 = 0xe;
LAB_0216415c:
          func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_02164300 + 0x2164168));
        } while (iVar1 == 10 || iVar1 == 0);
        func_0x03fa890c(&uStack_40,**(undefined4 **)(_UNK_02164318 + 0x21641ec));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e00,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x02285e9c(iVar1,0);
  }
  return piVar2;
}



// ===== FAT.Merge.EnergyBoostUtility$$IsItemNeededByMainOrders RVA 0x215431c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216431c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_021645a4 + 0x2164334);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021645a8 + 0x2164348));
    func_0x01384978(*(undefined4 *)(_UNK_021645ac + 0x2164354));
    func_0x01384978(*(undefined4 *)(_UNK_021645b0 + 0x2164360));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9e01,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01e6c228(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar9 = *(undefined4 **)(_UNK_021645b4 + 0x216441c);
    iVar1 = func_0x03d5bb20(iVar1,param_1,&iStack_1c,*puVar9);
    if ((iVar1 == 0) || (iStack_1c != 1)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01e6b664(iVar1,0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_021645b8 + 0x2164488)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x138);
            goto LAB_021644d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021645b8 + 0x2164488),0xf);
LAB_021644d0:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d5bb20(iVar1,param_1,&iStack_20,*puVar9);
      uVar2 = 0;
      if ((iVar1 != 0) && (0 < iStack_20)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        iVar1 = func_0x01db7bcc(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = FUN_0214da98(iVar1,0);
        iVar1 = func_0x02f7c01c(uVar5,param_1,0,**(undefined4 **)(_UNK_021645bc + 0x2164580));
        if (0 < iStack_20 - iVar1) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e01,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021856f4(iVar1,param_1,0);
  }
  return uVar2;
}


