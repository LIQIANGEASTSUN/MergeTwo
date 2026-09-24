/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardMultiActivityHandler$$TryAdd RVA 0x1aa021c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab021c(uint *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar8 = (char *)(_UNK_01ab067c + 0x1ab023c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab0680 + 0x1ab0254));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0684 + 0x1ab0260));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0688 + 0x1ab026c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab068c + 0x1ab0278));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0690 + 0x1ab0284));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0694 + 0x1ab0290));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0698 + 0x1ab029c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x8541,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x8541,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f134(&uStack_48,iVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    goto LAB_01ab032c;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x02b436dc(0,param_4,param_5,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar3 = func_0x02b439c4(0,param_4,param_5,&uStack_28,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
        goto LAB_01ab0400;
      }
      goto LAB_01ab041c;
    }
LAB_01ab03a8:
    uStack_44 = **(uint **)(_UNK_01ab069c + 0x1ab03b8);
    uVar7 = **(undefined4 **)(_UNK_01ab06a0 + 0x1ab03c4);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar3 = func_0x02b436dc(param_3,param_4,param_5,0);
    if (iVar3 != 0) goto LAB_01ab03a8;
    iVar3 = func_0x02b439c4(param_3,param_4,param_5,&uStack_28,0);
    if (iVar3 != 0) {
LAB_01ab041c:
      uVar7 = **(undefined4 **)(_UNK_01ab06a4 + 0x1ab042c);
      puVar4 = *(uint **)(_UNK_01ab06a8 + 0x1ab0438);
      *param_1 = 0;
      param_1[1] = 0;
      uStack_44 = *puVar4;
      if (uStack_28 != 0) {
        uStack_44 = uStack_28;
      }
LAB_01ab044c:
      uVar6 = 0;
      goto LAB_01ab0454;
    }
LAB_01ab0400:
    iVar3 = func_0x02b438e8(param_3,param_4,param_5,0);
    if (iVar3 != 0) goto LAB_01ab041c;
    if (*(int *)(**(int **)(_UNK_01ab06ac + 0x1ab046c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02b4b9a8(&uStack_48,param_4,param_5,param_8,&uStack_38,0);
    uVar1 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uStack_44 = param_5;
      uStack_48 = param_4;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01ab06b0 + 0x1ab04bc),&uStack_48);
      uVar7 = func_0x0244f690(**(undefined4 **)(_UNK_01ab06b4 + 0x1ab04e4),uVar7,uVar1,0);
LAB_01ab04e8:
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x02b45174(&uStack_50,param_3,param_4,param_5,uVar7,0);
      uStack_48 = uStack_50;
      uStack_44 = uStack_4c;
LAB_01ab032c:
      *param_1 = uStack_48;
      param_1[1] = uStack_44;
      return;
    }
    func_0x01ab06c8(&uStack_48,param_2,uStack_38,uStack_34,uStack_30,uStack_2c,param_6,&piStack_3c);
    piVar2 = piStack_3c;
    if (((byte)uStack_48 & 1) == 0) {
      uVar7 = **(undefined4 **)(_UNK_01ab06c4 + 0x1ab0560);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01ab044c;
    }
    if (piStack_3c == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    iVar3 = (**(code **)(iVar3 + 0x108))(piVar2,*(undefined4 *)(iVar3 + 0x10c));
    piVar2 = piStack_3c;
    if (iVar3 == 0) {
      uStack_44 = param_5;
      uStack_48 = param_4;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01ab06b8 + 0x1ab0650),&uStack_48);
      uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ab06bc + 0x1ab0674),uVar7,0);
      goto LAB_01ab04e8;
    }
    if (piStack_3c == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    (**(code **)(iVar3 + 0x168))(piVar2,param_7,*(undefined4 *)(iVar3 + 0x16c));
    func_0x01ab09b4(param_2,piStack_3c,param_7 == 0);
    func_0x02b4bb18(param_8,piStack_3c,0);
    piVar2 = piStack_3c;
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    func_0x02b47690(param_3,param_4,param_5,piVar2,param_7 == 0,0);
    uStack_44 = 0;
    puVar5 = *(undefined4 **)(_UNK_01ab06c0 + 0x1ab0634);
    *param_1 = 0;
    param_1[1] = 0;
    uVar7 = *puVar5;
  }
  uVar6 = 1;
LAB_01ab0454:
  func_0x038f3b0c(param_1,uVar6,uStack_44,uVar7);
  return;
}



// ===== FAT.MiniBoardMultiActivityHandler$$_TryCreateAct RVA 0x1aa06c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab06c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01ab097c + 0x1ab06e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab0980 + 0x1ab0700));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0984 + 0x1ab070c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0988 + 0x1ab0718));
    func_0x01384978(*(undefined4 *)(_UNK_01ab098c + 0x1ab0724));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0990 + 0x1ab0730));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8542,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8542,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225a6ac(&uStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  *param_8 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ab0a78(iVar1);
  if (iVar1 == 0) {
    uStack_2c = **(undefined4 **)(_UNK_01ab0994 + 0x1ab08c8);
    uVar5 = **(undefined4 **)(_UNK_01ab0998 + 0x1ab08d4);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8bd4(iVar1,param_5,0);
    if (iVar1 == 0) {
      uStack_2c = **(undefined4 **)(_UNK_01ab099c + 0x1ab08f0);
      puVar2 = *(undefined4 **)(_UNK_01ab09a0 + 0x1ab08fc);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01ab09a4 + 0x1ab0854) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02b4c2a0(&uStack_30,param_3,param_4,param_5,param_6,param_7,&uStack_28,0);
      if (((byte)uStack_30 & 1) != 0) {
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ab09ac + 0x1ab0924));
        func_0x01ab0b00();
        uVar5 = uStack_28;
        *param_8 = iVar3;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01ab0dc4(iVar3,uVar5,iVar1);
        uStack_2c = 0;
        puVar2 = *(undefined4 **)(_UNK_01ab09b0 + 0x1ab0968);
        *param_1 = 0;
        param_1[1] = 0;
        uVar5 = *puVar2;
        uVar4 = 1;
        goto LAB_01ab090c;
      }
      puVar2 = *(undefined4 **)(_UNK_01ab09a8 + 0x1ab08b4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = *puVar2;
  }
  uVar4 = 0;
LAB_01ab090c:
  func_0x038f3b0c(param_1,uVar4,uStack_2c,uVar5);
  return;
}



// ===== FAT.MiniBoardMultiActivityHandler$$_TryCreateMiniBoardMultiData RVA 0x1aa09b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab09b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8547,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8547,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
    func_0x01ab0e78(0,param_2);
    func_0x01384bf0();
  }
  else {
    func_0x01ab0e78(iVar1,param_2);
  }
  pcVar5 = (char *)(_UNK_01ab1004 + 0x1ab0f08);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab1008 + 0x1ab0f1c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x854e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x854e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485228(&uStack_38,param_3,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_3 != 0) {
    func_0x01ab1108(iVar1,1);
    func_0x01ab6488(iVar1,0);
    func_0x01ab6b84(iVar1);
    iVar2 = func_0x01ab27ec(iVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02139cf4(iVar2,0);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
      }
      uStack_28 = **(undefined4 **)(_UNK_01ab100c + 0x1ab0fe4);
      uStack_20 = 0;
      uStack_24 = uStack_28;
      func_0x019afa2c(uVar6,uVar3,*(int *)(iVar1 + 0x18) + 1);
    }
  }
  return;
}



// ===== FAT.MiniBoardMultiActivityHandler$$End RVA 0x1aa1010 =====

/* WARNING: Possible PIC construction at 0x01ab9018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01ab9020) */
/* WARNING: Removing unreachable block (ram,0x01ab9028) */
/* WARNING: Removing unreachable block (ram,0x01ab90e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffac : 0x01419098 */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01ab1010(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 extraout_r1;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *extraout_r12;
  undefined1 uVar16;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = func_0x0229f06c(0x8557,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 8);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02b449f8(iVar10,0);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b449f8(param_3,0);
    if (iVar10 == iVar2) {
      func_0x01ab1108(iVar1,1);
      iVar10 = func_0x0229f06c(0x8548,0);
      if (iVar10 != 0) {
        iVar10 = func_0x0229f13c(0x8548,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        iStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        iStack_30 = iStack_48;
        uStack_2c = uStack_44;
        iStack_28 = uStack_40;
        if (*(int *)(iVar10 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485278(&uStack_38,0,0);
        iVar2 = *(int *)(iVar10 + 8);
        uVar12 = *(undefined4 *)(iVar10 + 0xc);
        iVar1 = *(int *)(iVar10 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 3;
        if (iVar1 == 0) {
          uVar9 = 2;
        }
        iVar1 = func_0x0245495c(iVar2,uVar12,&uStack_38,uVar9,0,0);
        return iVar1;
      }
      *(undefined4 *)(iVar1 + 8) = 0;
      func_0x01ab8ac8(iVar1);
      func_0x01ab7fb0(iVar1);
      pcVar11 = (char *)(_UNK_01ab927c + 0x1ab8c14);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab9280 + 0x1ab8c28));
        func_0x01384978(*(undefined4 *)(_UNK_01ab9284 + 0x1ab8c34));
        func_0x01384978(*(undefined4 *)(_UNK_01ab9288 + 0x1ab8c40));
        func_0x01384978(*(undefined4 *)(_UNK_01ab928c + 0x1ab8c4c));
        func_0x01384978(*(undefined4 *)(_UNK_01ab9290 + 0x1ab8c58));
        func_0x01384978(*(undefined4 *)(_UNK_01ab9294 + 0x1ab8c64));
        *pcVar11 = '\x01';
      }
      iVar10 = func_0x0229f06c(0x854d,0);
      if (iVar10 != 0) {
        iVar10 = func_0x0229f13c(0x854d,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        iStack_30 = 0;
        func_0x0245494c(&iStack_48,0,0);
        iStack_30 = iStack_48;
        uStack_2c = uStack_44;
        iStack_28 = uStack_40;
        if (*(int *)(iVar10 + 0x10) != 0) {
          func_0x01485278(&iStack_30,*(int *)(iVar10 + 0x10),0);
        }
        func_0x01485278(&iStack_30,iVar1,0);
        iVar2 = *(int *)(iVar10 + 8);
        uVar12 = *(undefined4 *)(iVar10 + 0xc);
        iVar1 = *(int *)(iVar10 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 2;
        if (iVar1 == 0) {
          uVar9 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        iVar1 = func_0x0245495c(iVar2,uVar12,&iStack_30,uVar9);
        return iVar1;
      }
      iVar10 = *(int *)(iVar1 + 0x1c);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar10 + 0xc) = 0;
      *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
      iVar2 = func_0x01ab4cfc(iVar1);
      iVar10 = 0;
      if (iVar2 != 0) {
        iVar10 = *(int *)(iVar2 + 0x18);
      }
      if (iVar2 == 0 || iVar10 == 0) {
        return iVar10;
      }
      piVar3 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01ab9298 + 0x1ab8d04));
      iStack_28 = 0;
      piVar15 = *(int **)(_UNK_01ab929c + 0x1ab8d20);
      piVar13 = *(int **)(_UNK_01ab92a0 + 0x1ab8d28);
      puVar14 = *(undefined4 **)(_UNK_01ab92a4 + 0x1ab8d30);
LAB_01ab8d2c:
      do {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = iStack_28;
        iVar2 = *piVar3;
        iVar5 = *piVar15;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_01ab8d8c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar5,0);
LAB_01ab8d8c:
        iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar2 == 0) {
          uStack_2c = 0;
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          iVar1 = *piVar3;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 == 0) goto LAB_01ab90b0;
          piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          goto LAB_01ab9098;
        }
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        iVar5 = *piVar13;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_01ab8e00;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar5,0);
LAB_01ab8e00:
        uVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = 0;
        iVar2 = func_0x01ca8c9c(iVar2,uVar12,0);
        iStack_28 = iVar10;
        if (iVar2 != 0) {
          iStack_28 = iVar2;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0x24) != 0) {
            piVar7 = (int *)func_0x0364c2b4(*(int *)(iVar2 + 0x24),
                                            **(undefined4 **)(_UNK_01ab92a8 + 0x1ab8e8c));
            do {
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar10 = *piVar7;
              iVar2 = *piVar15;
              uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                do {
                  if (piVar8[-1] == iVar2) {
                    puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
                    goto LAB_01ab8ef0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar7,iVar2,0);
LAB_01ab8ef0:
              iVar10 = (*(code *)*puVar4)(piVar7,puVar4[1]);
              if (iVar10 == 0) goto LAB_01ab8f88;
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar10 = *piVar7;
              iVar2 = *piVar13;
              uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                do {
                  if (piVar8[-1] == iVar2) {
                    puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
                    goto LAB_01ab8f64;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar7,iVar2,0);
LAB_01ab8f64:
              uVar12 = (*(code *)*puVar4)(piVar7,puVar4[1]);
              func_0x02f622a4(*(undefined4 *)(iVar1 + 0x1c),uVar12,*puVar14);
            } while( true );
          }
        }
      } while( true );
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8557,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = param_4;
    iVar2 = func_0x0217b4e8(iVar1,param_1,param_2,param_3);
  }
  return iVar2;
LAB_01ab8f88:
  iVar10 = 0;
  if (piVar7 != (int *)0x0) {
    iStack_30 = 0;
    iVar10 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01ab92ac + 0x1ab8fac)) {
          puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
          goto LAB_01ab8ffc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01ab92ac + 0x1ab8fac),0);
LAB_01ab8ffc:
    iVar10 = iStack_30;
    (*(code *)*puVar4)(piVar7,puVar4[1]);
  }
  uVar16 = iVar10 == 0;
  if (!(bool)uVar16) {
    piVar3 = (int *)func_0x0145b108(4);
    iVar1 = iRam01419040;
    *piVar3 = iVar10;
    func_0x0145b118(piVar3,(int)&iRam01419040 + iVar1,0);
    if ((bool)uVar16) {
      *extraout_r12 = extraout_r1;
    }
    iVar1 = _UNK_014190a0 + 0x1419088;
    iVar10 = _UNK_014190a4 + 0x141908c;
    uVar12 = func_0x013c37a0();
    func_0x013e4ae4(uVar12,iVar1,iVar10);
    iVar1 = func_0x0140c80c();
    func_0x013d7660();
    return iVar1;
  }
  goto LAB_01ab8d2c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 2;
    if (uVar6 == 0) break;
LAB_01ab9098:
    if (piVar13[-1] == **(int **)(_UNK_01ab92b4 + 0x1ab9084)) {
      puVar14 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
      goto LAB_01ab90cc;
    }
  }
LAB_01ab90b0:
  puVar14 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ab92b4 + 0x1ab9084),0);
LAB_01ab90cc:
  iVar1 = (*(code *)*puVar14)(piVar3,puVar14[1]);
  return iVar1;
}



// ===== FAT.MiniBoardMultiActivityHandler$$.ctor RVA 0x1aa11ec =====

void FUN_01ab11ec(void)

{
  return;
}



// ===== FAT.MiniBoardMultiActivityHandler$$<>iFixBaseProxy_TryAdd RVA 0x1aa11f4 =====

void FUN_01ab11f4(undefined4 *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  func_0x02b4b574(&uStack_18);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.MiniBoardMultiActivityHandler$$<>iFixBaseProxy_End RVA 0x1aa1240 =====

void FUN_01ab1240(void)

{
  func_0x02b4c8a0();
  return;
}


