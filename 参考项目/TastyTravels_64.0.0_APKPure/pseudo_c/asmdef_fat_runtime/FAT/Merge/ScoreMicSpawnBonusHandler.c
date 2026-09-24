/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x214d624 =====

undefined4 FUN_0215d624(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4d5,0);
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
    func_0x01485278(&uStack_30,param_1,0);
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
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$get__isValid RVA 0x214d678 =====

undefined4 FUN_0215d678(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0xb4d6,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[9];
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x128,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar1 != 0) {
        uVar6 = func_0x02b4cec4(param_1);
        iVar1 = (int)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
        uVar4 = 0;
        if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))
        {
          uVar4 = 1;
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x128,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  func_0x01485278(&uStack_30,param_1,0);
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



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$.ctor RVA 0x214d6e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d6e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_0215d7d0 + 0x215d6fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215d7d4 + 0x215d710));
    func_0x01384978(*(undefined4 *)(_UNK_0215d7d8 + 0x215d71c));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0215d7dc + 0x215d730);
  uVar1 = func_0x01384be4(*puVar7);
  puVar5 = *(undefined4 **)(_UNK_0215d7e0 + 0x215d744);
  func_0x02450578(uVar1,*puVar5);
  uVar2 = *puVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02450578(uVar1,*puVar5);
  uVar2 = *puVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02450578(uVar1,*puVar5);
  uVar2 = *puVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02450578(uVar1,*puVar5);
  uVar2 = *puVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02450578(uVar1,*puVar5);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  iVar3 = func_0x0229f06c(0xb4d7,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb4d7,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar6,uVar1,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$SetDirty RVA 0x214d7e4 =====

void FUN_0215d7e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4d7,0);
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
    func_0x01485278(&uStack_30,param_1,0);
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
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$EnsureOutputMap RVA 0x214d83c =====

/* WARNING: Possible PIC construction at 0x0215d8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0215d8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0215d8d4) */
/* WARNING: Removing unreachable block (ram,0x0215d8f4) */
/* WARNING: Removing unreachable block (ram,0x0215dd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d83c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar2 = func_0x0229f06c(0xb4d8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb4d8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar2 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&iStack_30,uVar9,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar2 = *(int *)(param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_30 = func_0x027579d4(iVar2,0);
    if (iStack_30 != 0) {
      piVar5 = *(int **)(iStack_30 + 0x28);
      piVar4 = *(int **)(param_1 + 0xc);
      pcVar10 = (char *)(_UNK_0215de00 + 0x215d93c);
      iStack_34 = param_1;
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0215de04 + 0x215d950));
        func_0x01384978(*(undefined4 *)(_UNK_0215de08 + 0x215d95c));
        func_0x01384978(*(undefined4 *)(_UNK_0215de0c + 0x215d968));
        func_0x01384978(*(undefined4 *)(_UNK_0215de10 + 0x215d974));
        func_0x01384978(*(undefined4 *)(_UNK_0215de14 + 0x215d980));
        func_0x01384978(*(undefined4 *)(_UNK_0215de18 + 0x215d98c));
        func_0x01384978(*(undefined4 *)(_UNK_0215de1c + 0x215d998));
        func_0x01384978(*(undefined4 *)(_UNK_0215de20 + 0x215d9a4));
        *pcVar10 = '\x01';
      }
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      iVar2 = func_0x0229f06c(0xb4d9,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xb4d9,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02174858(iVar2,param_1,piVar4,piVar5,0);
        return;
      }
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0215de24 + 0x215da28)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd8);
            goto LAB_0215da70;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0215de24 + 0x215da28),3);
LAB_0215da70:
      (*(code *)*puVar3)(piVar4,puVar3[1]);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar5;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0215de28 + 0x215da9c)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_0215dae4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0215de28 + 0x215da9c),0);
LAB_0215dae4:
      piVar5 = (int *)(*(code *)*puVar3)(piVar5,puVar3[1]);
      piVar7 = *(int **)(_UNK_0215de2c + 0x215db08);
      do {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar5;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar7) {
              puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_0215db60;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar7,0);
LAB_0215db60:
        iVar2 = (*(code *)*puVar3)(piVar5,puVar3[1]);
        if (iVar2 == 0) goto LAB_0215dca8;
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar5;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0215de30 + 0x215db94)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_0215dbdc;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0215de30 + 0x215db94),0);
LAB_0215dbdc:
        (*(code *)*puVar3)(&iStack_48,piVar5,puVar3[1]);
        func_0x03923edc(&uStack_40,iStack_48,1,uStack_44,
                        **(undefined4 **)(_UNK_0215de34 + 0x215dc04));
        uVar1 = uStack_38;
        uVar9 = uStack_3c;
        uVar12 = uStack_40;
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar4;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0215de38 + 0x215dc3c)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
              goto LAB_0215dc84;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0215de38 + 0x215dc3c),2);
LAB_0215dc84:
        (*(code *)*puVar3)(piVar4,uVar12,uVar9,uVar1,puVar3[1]);
      } while( true );
    }
  }
  return;
LAB_0215dca8:
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_0215de3c + 0x215dcc4)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
          goto LAB_0215dd0c;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0215de3c + 0x215dcc4),0);
LAB_0215dd0c:
    (*(code *)*puVar3)(piVar5,puVar3[1]);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$_InitOutputs RVA 0x214d91c =====

/* WARNING: Removing unreachable block (ram,0x0215dd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d91c(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_0215de00 + 0x215d93c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215de04 + 0x215d950));
    func_0x01384978(*(undefined4 *)(_UNK_0215de08 + 0x215d95c));
    func_0x01384978(*(undefined4 *)(_UNK_0215de0c + 0x215d968));
    func_0x01384978(*(undefined4 *)(_UNK_0215de10 + 0x215d974));
    func_0x01384978(*(undefined4 *)(_UNK_0215de14 + 0x215d980));
    func_0x01384978(*(undefined4 *)(_UNK_0215de18 + 0x215d98c));
    func_0x01384978(*(undefined4 *)(_UNK_0215de1c + 0x215d998));
    func_0x01384978(*(undefined4 *)(_UNK_0215de20 + 0x215d9a4));
    *pcVar9 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar4 = func_0x0229f06c(0xb4d9,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb4d9,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar4,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *param_2;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0215de24 + 0x215da28)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd8);
        goto LAB_0215da70;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0215de24 + 0x215da28),3);
LAB_0215da70:
  (*(code *)*puVar5)(param_2,puVar5[1]);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *param_3;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0215de28 + 0x215da9c)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
        goto LAB_0215dae4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_0215de28 + 0x215da9c),0);
LAB_0215dae4:
  piVar7 = (int *)(*(code *)*puVar5)(param_3,puVar5[1]);
  piVar10 = *(int **)(_UNK_0215de2c + 0x215db08);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
          goto LAB_0215db60;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_0215db60:
    iVar4 = (*(code *)*puVar5)(piVar7,puVar5[1]);
    if (iVar4 == 0) break;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0215de30 + 0x215db94)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
          goto LAB_0215dbdc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_0215de30 + 0x215db94),0);
LAB_0215dbdc:
    (*(code *)*puVar5)(&uStack_38,piVar7,puVar5[1]);
    func_0x03923edc(&uStack_30,uStack_38,1,uStack_34,**(undefined4 **)(_UNK_0215de34 + 0x215dc04));
    uVar3 = uStack_28;
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0215de38 + 0x215dc3c)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xd0);
          goto LAB_0215dc84;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0215de38 + 0x215dc3c),2);
LAB_0215dc84:
    (*(code *)*puVar5)(param_2,uVar1,uVar2,uVar3,puVar5[1]);
  } while( true );
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0215de3c + 0x215dcc4)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_0215dd0c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_0215de3c + 0x215dcc4),0);
LAB_0215dd0c:
    (*(code *)*puVar5)(piVar7,puVar5[1]);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x214de44 =====

void FUN_0215de44(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4da,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb4da,0);
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
  func_0x01485278(&uStack_30,param_1,0);
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
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x214de90 =====

void FUN_0215de90(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4db,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb4db,0);
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
  func_0x01485278(&uStack_30,param_1,0);
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
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x214dedc =====

/* WARNING: Possible PIC construction at 0x0215e048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0215e384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0215e04c) */
/* WARNING: Removing unreachable block (ram,0x0215e388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215dedc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 auStack_38 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  undefined1 auStack_20 [4];
  int aiStack_1c [2];
  
  iVar1 = func_0x0229f06c(0xb4dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x38) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar5,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
    return;
  }
  iVar1 = FUN_0215d678(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x20);
  unaff_r4 = param_2;
  if (iVar1 != 2) {
    if (iVar1 == 9) {
      pcVar9 = (char *)(_UNK_0215e454 + 0x215e320);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0215e458 + 0x215e334));
        *pcVar9 = '\x01';
      }
      aiStack_1c[0] = 0;
      iVar1 = func_0x0229f06c(0xb4e2,0);
      if (iVar1 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(param_2 + 0x14);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x02feb690(iVar1,aiStack_1c,1,**(undefined4 **)(_UNK_0215e45c + 0x215e3b8))
           , iVar5 = aiStack_1c[0], iVar4 != 0)) {
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_0211e780(iVar5,0);
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x24);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x027582e8(iVar5,0);
            if (iVar5 != 0) {
              iVar5 = *(int *)(param_1 + 0x24);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x02757dac(iVar5,iVar1,0);
              if (0 < iVar1) {
                func_0x0215e460(param_1,param_2,iVar1,1);
              }
            }
          }
        }
        return;
      }
      iVar1 = func_0x0229f13c(0xb4e2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x215e388;
      unaff_r5 = param_1;
      unaff_r6 = iVar1;
      register0x00000054 = (BADSPACEBASE *)auStack_20;
      goto SUB_02174108;
    }
    if (iVar1 != 8) {
      return;
    }
  }
  pcVar9 = (char *)(_UNK_0215e2d0 + 0x215dfa8);
  aiStack_1c[0] = unaff_r5;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e2d4 + 0x215dfbc));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2d8 + 0x215dfc8));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2dc + 0x215dfd4));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e0 + 0x215dfe0));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e4 + 0x215dfec));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e8 + 0x215dff8));
    *pcVar9 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb4dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4dd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x215e04c;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_38;
    goto SUB_02174108;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x1c) < 1) {
    return;
  }
  iVar1 = func_0x02feb690(*(int *)(param_2 + 0x10),&iStack_24,1,
                          **(undefined4 **)(_UNK_0215e2ec + 0x215e084));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = iStack_24;
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  iVar5 = FUN_02122bb4(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 != *(int *)(iVar5 + 0x14)) {
    return;
  }
  FUN_0215d83c(param_1);
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0215e2f0 + 0x215e11c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x180);
        goto LAB_0215e164;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0215e2f0 + 0x215e11c),0x18);
LAB_0215e164:
  uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar1 = iStack_24;
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02123058(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x2e) == '\0') {
LAB_0215e1e0:
    puVar3 = (undefined4 *)(param_1 + 0xc);
  }
  else {
    switch(uVar10) {
    case 1:
      puVar3 = (undefined4 *)(param_1 + 0x10);
      break;
    case 2:
      puVar3 = (undefined4 *)(param_1 + 0x14);
      break;
    case 3:
      puVar3 = (undefined4 *)(param_1 + 0x18);
      break;
    case 4:
      puVar3 = (undefined4 *)(param_1 + 0x1c);
      break;
    default:
      goto LAB_0215e1e0;
    }
  }
  piVar2 = *(int **)(_UNK_0215e2f4 + 0x215e208);
  uVar10 = *puVar3;
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0215e2f8 + 0x215e254));
    func_0x03a06bcc(iVar5,uVar8,**(undefined4 **)(_UNK_0215e2fc + 0x215e274),0);
    *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar5;
  }
  auStack_38[0] = **(undefined4 **)(_UNK_0215e300 + 0x215e2a0);
  func_0x02fbdda8(&iStack_30,uVar10,iVar5,0);
  if (0 < iStack_30) {
    iStack_30 = iStack_2c;
  }
  if (0 < iStack_30) {
    func_0x0215e460(param_1,param_2);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$SimulateSpawn RVA 0x214df8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215df8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_0215e2d0 + 0x215dfa8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e2d4 + 0x215dfbc));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2d8 + 0x215dfc8));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2dc + 0x215dfd4));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e0 + 0x215dfe0));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e4 + 0x215dfec));
    func_0x01384978(*(undefined4 *)(_UNK_0215e2e8 + 0x215dff8));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb4dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4dd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x1c) < 1) {
    return;
  }
  iVar1 = func_0x02feb690(*(int *)(param_2 + 0x10),&iStack_24,1,
                          **(undefined4 **)(_UNK_0215e2ec + 0x215e084));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = iStack_24;
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_02122bb4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 != *(int *)(iVar2 + 0x14)) {
    return;
  }
  FUN_0215d83c(param_1);
  piVar3 = (int *)FUN_021566f4();
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0215e2f0 + 0x215e11c)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x180);
        goto LAB_0215e164;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0215e2f0 + 0x215e11c),0x18);
LAB_0215e164:
  uVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  iVar1 = iStack_24;
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02123058(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x2e) == '\0') {
LAB_0215e1e0:
    puVar4 = (undefined4 *)(param_1 + 0xc);
  }
  else {
    switch(uVar5) {
    case 1:
      puVar4 = (undefined4 *)(param_1 + 0x10);
      break;
    case 2:
      puVar4 = (undefined4 *)(param_1 + 0x14);
      break;
    case 3:
      puVar4 = (undefined4 *)(param_1 + 0x18);
      break;
    case 4:
      puVar4 = (undefined4 *)(param_1 + 0x1c);
      break;
    default:
      goto LAB_0215e1e0;
    }
  }
  piVar3 = *(int **)(_UNK_0215e2f4 + 0x215e208);
  uVar5 = *puVar4;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    uVar9 = **(undefined4 **)(iVar1 + 0x5c);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0215e2f8 + 0x215e254));
    func_0x03a06bcc(iVar2,uVar9,**(undefined4 **)(_UNK_0215e2fc + 0x215e274),0);
    *(int *)(*(int *)(*piVar3 + 0x5c) + 4) = iVar2;
  }
  func_0x02fbdda8(&iStack_30,uVar5,iVar2,0,**(undefined4 **)(_UNK_0215e300 + 0x215e2a0));
  if (0 < iStack_30) {
    iStack_30 = iStack_2c;
  }
  if (0 < iStack_30) {
    func_0x0215e460(param_1,param_2);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$SimulateBubbleSpawn RVA 0x214e304 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215e304(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_0215e454 + 0x215e320);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e458 + 0x215e334));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb4e2,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if ((iVar1 != 0) &&
       (iVar2 = func_0x02feb690(iVar1,&iStack_1c,1,**(undefined4 **)(_UNK_0215e45c + 0x215e3b8)),
       iVar3 = iStack_1c, iVar2 != 0)) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_0211e780(iVar3,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x027582e8(iVar3,0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x24);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02757dac(iVar3,iVar1,0);
          if (0 < iVar1) {
            func_0x0215e460(param_1,param_2,iVar1,1);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4e2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler$$_SetActivityToken RVA 0x214e460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215e460(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0215e5b0 + 0x215e480);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e5b4 + 0x215e498));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb4e1,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
      FUN_02119438(0,0);
      func_0x01384bf0();
    }
    else {
      FUN_02119438(iVar1,0);
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_24,0,**(undefined4 **)(_UNK_0215e5b8 + 0x215e54c));
    iVar1 = iStack_24;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02b449f8(iVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_0211bdcc(iVar1,uVar3,param_3,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4e1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler.<>c$$.cctor RVA 0x214e5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215e5bc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0215e614 + 0x215e5cc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e618 + 0x215e5e0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0215e61c + 0x215e5f4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler.<>c$$.ctor RVA 0x214e620 =====

void FUN_0215e620(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ScoreMicSpawnBonusHandler.<>c$$<SimulateSpawn>b__19_0 RVA 0x214e628 =====

undefined4 FUN_0215e628(void)

{
  undefined4 in_r3;
  
  return in_r3;
}


