/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityOrderRate$$get_DetailID RVA 0x25ef964 =====

undefined4 FUN_025ff964(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.ActivityOrderRate$$set_DetailID RVA 0x25ef96c =====

void FUN_025ff96c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate$$get_MilestoneFirst RVA 0x25ef974 =====

undefined4 FUN_025ff974(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.ActivityOrderRate$$set_MilestoneFirst RVA 0x25ef97c =====

void FUN_025ff97c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate$$get_MilestoneSecond RVA 0x25ef984 =====

undefined4 FUN_025ff984(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.ActivityOrderRate$$set_MilestoneSecond RVA 0x25ef98c =====

void FUN_025ff98c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate$$get_MilestoneThird RVA 0x25ef994 =====

undefined4 FUN_025ff994(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.ActivityOrderRate$$set_MilestoneThird RVA 0x25ef99c =====

void FUN_025ff99c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate$$get_LastMainShowScore RVA 0x25ef9a4 =====

undefined4 FUN_025ff9a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.ActivityOrderRate$$set_LastMainShowScore RVA 0x25ef9ac =====

void FUN_025ff9ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate$$.ctor RVA 0x25ef9b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025ff9b4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_025ffb24 + 0x25ff9d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025ffb28 + 0x25ff9e4));
    func_0x01384978(*(undefined4 *)(_UNK_025ffb2c + 0x25ff9f0));
    func_0x01384978(*(undefined4 *)(_UNK_025ffb30 + 0x25ff9fc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_025ffb34 + 0x25ffa10);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  func_0x02b64854(&uStack_28,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x6c4),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0x5c) = uStack_20;
  *(ulonglong *)(param_1 + 0x54) = CONCAT44(uStack_24,uStack_28);
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x02b64854(&uStack_38,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x6c8),0);
  uVar2 = **(undefined4 **)(_UNK_025ffb38 + 0x25ffa88);
  puVar3 = *(undefined4 **)(_UNK_025ffb3c + 0x25ffa98);
  *(undefined4 *)(param_1 + 0x68) = uStack_30;
  uVar4 = *puVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_34,uStack_38);
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01caa68c(iVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  return;
}



// ===== FAT.ActivityOrderRate$$BoardEntryAsset RVA 0x25efb40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_025ffb40(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_025ffc7c + 0x25ffb58);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025ffc80 + 0x25ffb6c));
    func_0x01384978(*(undefined4 *)(_UNK_025ffc84 + 0x25ffb78));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x3f56,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cc0100(iVar1,0x8f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = func_0x02b617fc(iVar1,0);
      iVar1 = func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_025ffc8c + 0x25ffc58),&uStack_14,0);
      if (iVar1 == 0) {
        uStack_14 = 0;
      }
    }
    else {
      uStack_14 = **(undefined4 **)(**(int **)(_UNK_025ffc88 + 0x25ffc1c) + 0x5c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3f56,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderRate$$get_buff_entry_res_key RVA 0x25efc90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_025ffc90(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_025ffd64 + 0x25ffca8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025ffd68 + 0x25ffcbc));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x3f57,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    iVar1 = func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_025ffd6c + 0x25ffd40),&uStack_14,0);
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3f57,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderRate$$SetupFresh RVA 0x25efd70 =====

void FUN_025ffd70(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x3f58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f58,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01cf6408(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



// ===== FAT.ActivityOrderRate$$LoadSetup RVA 0x25efe24 =====

void FUN_025ffe24(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x3f5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01c23c30(iVar1,*(undefined4 *)(param_2 + 0x28),0);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  uVar4 = func_0x01c23c30(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  uVar4 = func_0x01c23c30(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  uVar4 = func_0x01c23c30(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  uVar4 = func_0x01c23c30(iVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  return;
}



// ===== FAT.ActivityOrderRate$$SaveSetup RVA 0x25eff28 =====

/* WARNING: Possible PIC construction at 0x025ffff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02600028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02600060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02600098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02600064) */
/* WARNING: Removing unreachable block (ram,0x02600088) */
/* WARNING: Removing unreachable block (ram,0x0260008c) */
/* WARNING: Removing unreachable block (ram,0x0260002c) */
/* WARNING: Removing unreachable block (ram,0x02600050) */
/* WARNING: Removing unreachable block (ram,0x02600054) */
/* WARNING: Removing unreachable block (ram,0x025ffff4) */
/* WARNING: Removing unreachable block (ram,0x02600018) */
/* WARNING: Removing unreachable block (ram,0x0260001c) */
/* WARNING: Removing unreachable block (ram,0x0260009c) */
/* WARNING: Removing unreachable block (ram,0x026000c0) */
/* WARNING: Removing unreachable block (ram,0x026000c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025fff28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_026000d8 + 0x25fff40);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_026000dc + 0x25fff54));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f5f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar3 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x6c),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_026000e0 + 0x25ffff0);
  iVar1 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar3;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar3,*(int *)(iVar3 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
  iVar1 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  *(uint *)(iVar3 + 0xc) = uVar6 + 1;
  if (iVar1 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar1 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityOrderRate$$Open RVA 0x25f00e4 =====

/* WARNING: Possible PIC construction at 0x019a8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019a8988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026000e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int unaff_r5;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uStack_50;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x3f65,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f65,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar3 = *(int *)(iVar1 + 0x10);
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
    if (iVar3 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar3,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return;
  }
  piVar4 = (int *)(param_1 + 0x54);
  iVar1 = func_0x0229f06c(0x3df6,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3df6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0221335c + 0x2213250);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02213360 + 0x2213264),param_1,piVar4,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *(undefined8 *)piVar4;
    uStack_48 = *(undefined4 *)(param_1 + 0x5c);
    uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02213364 + 0x22132b8),&uStack_50);
    func_0x01485288(&uStack_38,uVar8,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar3,uVar8,&uStack_38,uVar5,1,0);
    return;
  }
  iVar1 = *piVar4;
  iVar3 = func_0x0229f06c(0x1724,0);
  if (iVar3 == 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    pcVar6 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x13da,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != 0) &&
         (iVar2 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,iVar3,piVar4,0);
      uStack_20 = uStack_18;
      pcVar6 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar6 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x94b,0);
      if (iVar1 == 0) {
        piVar4 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b489c0(&uStack_38,param_1,0);
        uVar5 = uStack_34;
        uVar8 = uStack_38;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x54) = uStack_30;
        *(undefined4 *)(iVar1 + 0x48) = uVar8;
        *(undefined4 *)(iVar1 + 0x4c) = uVar5;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x02b3c4a4(param_1,0);
        *(undefined4 *)(iVar1 + 0x50) = uVar8;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar8 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar1 + 0x58) = uVar8;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 0;
        uVar8 = func_0x02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x036a1750(uVar8,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar3 != 0) && (uVar7 = 0, *(char *)(iVar3 + 0x2c) != '\0')) {
          uVar7 = 1;
        }
        iVar3 = *(int *)(*piVar4 + 0x74);
        *(undefined1 *)(iVar1 + 0x5c) = uVar7;
        if (iVar3 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x94b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x19a8988;
      unaff_r4 = uStack_18;
      unaff_r5 = iVar1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
      goto SUB_02173f80;
    }
    iVar2 = func_0x0229f13c(0x13da,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1724,0);
    iVar3 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar1,0);
  uStack_38 = (undefined4)uStack_50;
  uStack_34 = uStack_50._4_4_;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485278(&uStack_38,iVar1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar3,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityOrderRate$$AfterLoad RVA 0x25f0144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02600144(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02600404 + 0x2600160);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02600408 + 0x2600174));
    func_0x01384978(*(undefined4 *)(_UNK_0260040c + 0x2600180));
    func_0x01384978(*(undefined4 *)(_UNK_02600410 + 0x260018c));
    func_0x01384978(*(undefined4 *)(_UNK_02600414 + 0x2600198));
    func_0x01384978(*(undefined4 *)(_UNK_02600418 + 0x26001a4));
    func_0x01384978(*(undefined4 *)(_UNK_0260041c + 0x26001b0));
    func_0x01384978(*(undefined4 *)(_UNK_02600420 + 0x26001bc));
    func_0x01384978(*(undefined4 *)(_UNK_02600424 + 0x26001c8));
    func_0x01384978(*(undefined4 *)(_UNK_02600428 + 0x26001d4));
    func_0x01384978(*(undefined4 *)(_UNK_0260042c + 0x26001e0));
    func_0x01384978(*(undefined4 *)(_UNK_02600430 + 0x26001ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f66,0);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x6c);
    if (*(int *)(**(int **)(_UNK_02600434 + 0x260024c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x036a1750(uVar4,**(undefined4 **)(_UNK_02600438 + 0x260026c));
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    if (param_2 == 0) {
      func_0x02600460(param_1);
    }
    func_0x02600868(param_1);
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar3 = param_1 + 0x54;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 1;
    uStack_24 = 0;
    func_0x02b64928(iVar3,*(undefined4 *)(iVar1 + 0x1c),param_1,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 1;
    uStack_24 = 0;
    func_0x02b64928(param_1 + 0x60,*(undefined4 *)(iVar1 + 0x24),param_1,0);
    if (*(int *)(**(int **)(_UNK_0260043c + 0x2600308) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02600440 + 0x2600324));
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02600444 + 0x2600338));
    func_0x03ccb96c(uVar4,param_1,**(undefined4 **)(_UNK_02600448 + 0x2600354),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e80c(iVar1,uVar4,**(undefined4 **)(_UNK_0260044c + 0x2600378));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02600450 + 0x260038c));
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02600454 + 0x26003a0));
    func_0x03ccb96c(uVar4,param_1,**(undefined4 **)(_UNK_02600458 + 0x26003bc),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e80c(iVar1,uVar4,**(undefined4 **)(_UNK_0260045c + 0x26003e0));
    iVar1 = func_0x0229f06c(0x15e,0,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01e7e874(iVar1,0);
      func_0x02b64b60(iVar3,iVar1,uVar4,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x15e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0217c17c(iVar1,iVar3,0,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x3f66,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.ActivityOrderRate$$ResolveMilestone RVA 0x25f0460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02600460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_02600840 + 0x2600478);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02600844 + 0x260048c));
    func_0x01384978(*(undefined4 *)(_UNK_02600848 + 0x2600498));
    func_0x01384978(*(undefined4 *)(_UNK_0260084c + 0x26004a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f67,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f67,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x01dd4dbc(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03653d1c(iVar1,0,**(undefined4 **)(_UNK_02600850 + 0x2600588));
    if (*(int *)(**(int **)(_UNK_02600854 + 0x26005a0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_2c,uVar2,0);
    uVar6 = uStack_28;
    uVar2 = uStack_2c;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_3c = 0;
    uStack_38 = uVar6;
    uStack_34 = 0;
    uStack_40 = uVar7;
    func_0x01cddaf8(&uStack_2c,iVar1,uVar5,uVar2);
    *(undefined4 *)(param_1 + 0x70) = uStack_28;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (1 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03653d1c(iVar1,1,**(undefined4 **)(_UNK_02600858 + 0x260068c));
    if (*(int *)(**(int **)(_UNK_0260085c + 0x26006a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_2c,uVar2,0);
    uVar6 = uStack_28;
    uVar2 = uStack_2c;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_3c = 0;
    uStack_38 = uVar6;
    uStack_34 = 0;
    uStack_40 = uVar7;
    func_0x01cddaf8(&uStack_2c,iVar1,uVar5,uVar2);
    *(undefined4 *)(param_1 + 0x74) = uStack_28;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (2 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03653d1c(iVar1,2,**(undefined4 **)(_UNK_02600860 + 0x2600790));
    if (*(int *)(**(int **)(_UNK_02600864 + 0x26007a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_2c,uVar2,0);
    uVar2 = uStack_28;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_3c = 0;
    uStack_38 = uVar2;
    uStack_34 = 0;
    uStack_40 = uVar7;
    func_0x01cddaf8(&uStack_2c,iVar1,uVar6,uStack_2c);
    *(undefined4 *)(param_1 + 0x78) = uStack_28;
  }
  return;
}



// ===== FAT.ActivityOrderRate$$ResolveCurPhase RVA 0x25f0868 =====

void FUN_02600868(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
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
  
  uVar5 = func_0x0229f06c(0x3f68,0);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x74) <= iVar1) {
      uVar4 = 1;
    }
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x70) <= iVar1;
    if (*(int *)(param_1 + 0x74) <= iVar1) {
      *(undefined4 *)(param_1 + 0x48) = uVar4;
    }
    if (*(int *)(param_1 + 0x78) <= iVar1) {
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x3f68,0);
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



// ===== FAT.ActivityOrderRate$$WhenEnd RVA 0x25f08ec =====

/* WARNING: Possible PIC construction at 0x02600a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349ead8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02600a44) */
/* WARNING: Removing unreachable block (ram,0x02600a90) */
/* WARNING: Removing unreachable block (ram,0x02600a94) */
/* WARNING: Removing unreachable block (ram,0x0349eadc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026008ec(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_14;
  
  pcVar7 = (char *)(_UNK_02600ab0 + 0x2600900);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02600ab4 + 0x2600914));
    func_0x01384978(*(undefined4 *)(_UNK_02600ab8 + 0x2600920));
    func_0x01384978(*(undefined4 *)(_UNK_02600abc + 0x260092c));
    func_0x01384978(*(undefined4 *)(_UNK_02600ac0 + 0x2600938));
    func_0x01384978(*(undefined4 *)(_UNK_02600ac4 + 0x2600944));
    func_0x01384978(*(undefined4 *)(_UNK_02600ac8 + 0x2600950));
    func_0x01384978(*(undefined4 *)(_UNK_02600acc + 0x260095c));
    func_0x01384978(*(undefined4 *)(_UNK_02600ad0 + 0x2600968));
    func_0x01384978(*(undefined4 *)(_UNK_02600ad4 + 0x2600974));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f6d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = piStack_40;
    iStack_24 = uStack_3c;
    iStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02600ad8 + 0x26009cc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02600adc + 0x26009e8));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02600ae0 + 0x26009fc));
  func_0x03ccb96c(iVar6,param_1,**(undefined4 **)(_UNK_02600ae4 + 0x2600a18),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02600ae8 + 0x2600a3c);
  piStack_14 = (int *)0x2600a44;
  ppiVar10 = &piStack_28;
  if (iVar6 == 0) {
    return;
  }
  iVar9 = 0;
  piStack_28 = param_1;
  iStack_24 = iVar1;
  iStack_20 = iVar6;
  piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  if ((piVar2 == (int *)0x0) || (iVar9 = func_0x02457d4c(piVar2,iVar6), iVar9 != 0)) {
    iVar6 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar9;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar6);
    if (iVar1 != 0) {
      return;
    }
    ppiVar10 = (int **)&stack0xfffffff0;
    piVar5 = piStack_28;
  }
  else {
    piStack_14 = (int *)0x349eadc;
    piVar5 = piVar2;
  }
  ppiVar10[-1] = piStack_14;
  ppiVar10[-2] = piVar5;
  func_0x0142996c(ppiVar10 + -5,*(undefined4 *)(*piVar2 + 0x20),iVar6);
  piVar2 = ppiVar10[-3];
  if (((uint)ppiVar10[-5] & 1) == 0) {
    piVar2 = (int *)((uint)(ppiVar10 + -5) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)ppiVar10[-5] & 1) != 0) {
    func_0x0148d9d4(ppiVar10[-3]);
  }
  return;
}



// ===== FAT.ActivityOrderRate$$WhenReset RVA 0x25f0afc =====

/* WARNING: Possible PIC construction at 0x02600c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349ead8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02600c54) */
/* WARNING: Removing unreachable block (ram,0x02600ca0) */
/* WARNING: Removing unreachable block (ram,0x02600ca4) */
/* WARNING: Removing unreachable block (ram,0x0349eadc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02600afc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_14;
  
  pcVar7 = (char *)(_UNK_02600cc0 + 0x2600b10);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02600cc4 + 0x2600b24));
    func_0x01384978(*(undefined4 *)(_UNK_02600cc8 + 0x2600b30));
    func_0x01384978(*(undefined4 *)(_UNK_02600ccc + 0x2600b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02600cd0 + 0x2600b48));
    func_0x01384978(*(undefined4 *)(_UNK_02600cd4 + 0x2600b54));
    func_0x01384978(*(undefined4 *)(_UNK_02600cd8 + 0x2600b60));
    func_0x01384978(*(undefined4 *)(_UNK_02600cdc + 0x2600b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02600ce0 + 0x2600b78));
    func_0x01384978(*(undefined4 *)(_UNK_02600ce4 + 0x2600b84));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f6e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = piStack_40;
    iStack_24 = uStack_3c;
    iStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02600ce8 + 0x2600bdc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02600cec + 0x2600bf8));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02600cf0 + 0x2600c0c));
  func_0x03ccb96c(iVar6,param_1,**(undefined4 **)(_UNK_02600cf4 + 0x2600c28),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02600cf8 + 0x2600c4c);
  piStack_14 = (int *)0x2600c54;
  ppiVar10 = &piStack_28;
  if (iVar6 == 0) {
    return;
  }
  iVar9 = 0;
  piStack_28 = param_1;
  iStack_24 = iVar1;
  iStack_20 = iVar6;
  piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  if ((piVar2 == (int *)0x0) || (iVar9 = func_0x02457d4c(piVar2,iVar6), iVar9 != 0)) {
    iVar6 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar9;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar6);
    if (iVar1 != 0) {
      return;
    }
    ppiVar10 = (int **)&stack0xfffffff0;
    piVar5 = piStack_28;
  }
  else {
    piStack_14 = (int *)0x349eadc;
    piVar5 = piVar2;
  }
  ppiVar10[-1] = piStack_14;
  ppiVar10[-2] = piVar5;
  func_0x0142996c(ppiVar10 + -5,*(undefined4 *)(*piVar2 + 0x20),iVar6);
  piVar2 = ppiVar10[-3];
  if (((uint)ppiVar10[-5] & 1) == 0) {
    piVar2 = (int *)((uint)(ppiVar10 + -5) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)ppiVar10[-5] & 1) != 0) {
    func_0x0148d9d4(ppiVar10[-3]);
  }
  return;
}



// ===== FAT.ActivityOrderRate$$TryAddPhase RVA 0x25f0d0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02600d0c(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
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
  
  pcVar7 = (char *)(_UNK_02600ee8 + 0x2600d28);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02600eec + 0x2600d3c));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x3f69,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x3f69,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01c9e5bc(iVar3,2,0);
  iVar3 = func_0x02600ef4(param_2,uVar6);
  if (iVar3 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(_UNK_02600ef0 + 0x2600df4);
    iVar5 = *(int *)(param_2 + 0x14);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar8;
    }
    if (iVar5 != *(int *)(*(int *)(iVar3 + 0x5c) + 0xa8)) {
      iVar5 = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x24);
      cVar2 = *(char *)(param_1 + 0x44);
      FUN_02600868(param_1);
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar5 != iVar3 || cVar2 != *(char *)(param_1 + 0x44)) {
        *(undefined1 *)(param_1 + 0x80) = 1;
        if (cVar2 != *(char *)(param_1 + 0x44)) {
          uStack_24 = *(undefined4 *)(param_1 + 0x6c);
          uStack_28 = *(undefined4 *)(param_1 + 0x78);
          uStack_20 = 0;
          func_0x019b7568(param_1,1,0,1);
          iVar3 = *(int *)(param_1 + 0x48);
        }
        if (iVar5 + 1 <= iVar3) {
          iVar3 = iVar5 + 2;
          do {
            uStack_24 = *(undefined4 *)(param_1 + 0x6c);
            uStack_28 = *(undefined4 *)(param_1 + 0x78);
            uStack_20 = 0;
            func_0x019b7568(param_1,1,iVar3 == 3,iVar3);
            bVar1 = iVar3 <= *(int *)(param_1 + 0x48);
            iVar3 = iVar3 + 1;
          } while (bVar1);
        }
      }
    }
  }
  return;
}



// ===== FAT.ActivityOrderRate$$IsMergeCoinReward RVA 0x25f0ef4 =====

uint FUN_02600ef4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x3f6a,0);
  if (iVar1 == 0) {
    if ((param_1 != 0) && (0 < param_2)) {
      uVar5 = (uint)(*(int *)(param_1 + 8) == param_2);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x3f6a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.ActivityOrderRate$$OnFlyIconStart RVA 0x25f0f70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02600f70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar5 = (char *)(_UNK_0260120c + 0x2600f8c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02601210 + 0x2600fa0));
    func_0x01384978(*(undefined4 *)(_UNK_02601214 + 0x2600fac));
    func_0x01384978(*(undefined4 *)(_UNK_02601218 + 0x2600fb8));
    func_0x01384978(*(undefined4 *)(_UNK_0260121c + 0x2600fc4));
    func_0x01384978(*(undefined4 *)(_UNK_02601220 + 0x2600fd0));
    func_0x01384978(*(undefined4 *)(_UNK_02601224 + 0x2600fdc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f6b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01c9e5bc(iVar1,2,0);
  iVar1 = FUN_02600ef4(uVar4,uVar2);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar10 = *(int **)(_UNK_02601228 + 0x26010a8);
    iVar3 = *(int *)(iVar1 + 0x14);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    if (iVar3 != *(int *)(*(int *)(iVar1 + 0x5c) + 0xa8)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(param_2 + 0x1c);
      uVar4 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar10;
      uVar2 = *(undefined4 *)(iVar6 + 0x10);
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar10;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = **(undefined4 **)(_UNK_0260122c + 0x2601158);
      uStack_2c = **(undefined4 **)(_UNK_02601230 + 0x2601164);
      uStack_34 = 0xae;
      uStack_28 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uVar4 = func_0x01cdcbac(iVar1,uVar4,uVar2,uVar7);
      uVar7 = *(undefined4 *)(param_2 + 0x28);
      uVar8 = *(undefined4 *)(param_2 + 0x2c);
      uVar9 = *(undefined4 *)(param_2 + 0x30);
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02601234 + 0x26011a4));
      func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_02601238 + 0x26011c0),0);
      if (*(int *)(**(int **)(_UNK_0260123c + 0x26011d4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_40 = uVar2;
      func_0x0206de24(uVar4,uVar7,uVar8,uVar9);
    }
  }
  return;
}



// ===== FAT.ActivityOrderRate$$RefreshLastShowPhase RVA 0x25f1240 =====

void FUN_02601240(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x3f6f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f6f,0);
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
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x24);
  return;
}



// ===== FAT.ActivityOrderRate$$GetExtraRewardMiniThemeRes RVA 0x25f1298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02601298(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02601324 + 0x26012b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02601328 + 0x26012c4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f70,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021aeaac + 0x21ae9b8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021aeab0 + 0x21ae9cc),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021aeab4 + 0x21aea9c));
    return uVar4;
  }
  return **(undefined4 **)(_UNK_0260132c + 0x2601320);
}



// ===== FAT.ActivityOrderRate$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x25f1330 =====

uint FUN_02601330(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x3f71,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3f71,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_01db7b78(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 8) == param_2);
}



// ===== FAT.ActivityOrderRate$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x25f13f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_026013f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_026017d4 + 0x2601418);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_026017d8 + 0x2601430));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3f72,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    return 0;
  }
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = func_0x02b449f8(param_1,0);
    if (*(int *)(**(int **)(_UNK_026017dc + 0x26014d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01e41d38(param_2,uVar2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = FUN_01e4b2b0(iVar1,param_2,0);
    iVar4 = FUN_01e3e5b8(param_2,*(undefined4 *)(iVar1 + 0x10),0);
    iVar5 = func_0x02b449f8(param_1,0);
    if (iVar3 == iVar5) {
      if (*(char *)(param_1 + 0x44) == '\0') {
LAB_026017b8:
        FUN_01e4df68(iVar1,param_2,0);
        return 1;
      }
      if (iVar4 == *(int *)(param_1 + 0x48) + 1) {
        return 0;
      }
    }
    else if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x44) == '\0') {
        return 0;
      }
    }
    else {
      FUN_01e4df68(iVar1,param_2,0);
    }
    uVar2 = func_0x02b449f8(param_1,0);
    uVar6 = func_0x02b4429c(param_1,0);
    iVar3 = *(int *)(param_1 + 0x48);
    goto LAB_02601778;
  }
  piVar8 = *(int **)(_UNK_026017e0 + 0x260156c);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01e4b23c(iVar1,param_2,0);
  if (iVar1 == 0) {
LAB_0260169c:
    if (*(char *)(param_1 + 0x44) == '\0') {
      return 0;
    }
  }
  else {
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
    uVar2 = func_0x02b449f8(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01e4ef14(iVar1,param_2,uVar2,0);
    if (iVar1 == 0) {
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01e4df68(iVar1,param_2,0);
      goto LAB_0260169c;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto LAB_026017b8;
    }
    iVar1 = FUN_01e3e5b8(param_2,0x1d,0);
    if (iVar1 == *(int *)(param_1 + 0x48) + 1) {
      return 0;
    }
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
  uVar2 = func_0x02b449f8(param_1,0);
  uVar6 = func_0x02b4429c(param_1,0);
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
LAB_02601778:
  FUN_01e4bc70(iVar1,param_2,uVar2,uVar6,iVar3 + 1,1,0);
  return 1;
}



// ===== FAT.ActivityOrderRate$$TryClaimReward RVA 0x25f17e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_026017e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02601d7c + 0x2601808);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02601d80 + 0x260181c));
    func_0x01384978(*(undefined4 *)(_UNK_02601d84 + 0x2601828));
    func_0x01384978(*(undefined4 *)(_UNK_02601d88 + 0x2601834));
    func_0x01384978(*(undefined4 *)(_UNK_02601d8c + 0x2601840));
    func_0x01384978(*(undefined4 *)(_UNK_02601d90 + 0x260184c));
    func_0x01384978(*(undefined4 *)(_UNK_02601d94 + 0x2601858));
    func_0x01384978(*(undefined4 *)(_UNK_02601d98 + 0x2601864));
    func_0x01384978(*(undefined4 *)(_UNK_02601d9c + 0x2601870));
    func_0x01384978(*(undefined4 *)(_UNK_02601da0 + 0x260187c));
    func_0x01384978(*(undefined4 *)(_UNK_02601da4 + 0x2601888));
    func_0x01384978(*(undefined4 *)(_UNK_02601da8 + 0x2601894));
    func_0x01384978(*(undefined4 *)(_UNK_02601dac + 0x26018a0));
    func_0x01384978(*(undefined4 *)(_UNK_02601db0 + 0x26018ac));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x3f74,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02601db4 + 0x2601930));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01caa7b8(iVar3,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    uVar8 = func_0x01caa6f0(iVar3,uVar8,0);
    puVar9 = *(undefined4 **)(_UNK_02601db8 + 0x26019dc);
    *(undefined4 *)(iVar1 + 8) = uVar8;
    uVar8 = func_0x01384be4(*puVar9);
    func_0x041cf488(uVar8,iVar1,**(undefined4 **)(_UNK_02601dbc + 0x2601a00),0);
    uVar4 = func_0x02fb7b18(uVar4,uVar8,**(undefined4 **)(_UNK_02601dc0 + 0x2601a18));
    uVar8 = func_0x01384be4(*puVar9);
    func_0x041cf488(uVar8,iVar1,**(undefined4 **)(_UNK_02601dc4 + 0x2601a44),0);
    iVar3 = func_0x02f9ae48(uVar4,uVar8,**(undefined4 **)(_UNK_02601dc8 + 0x2601a5c));
    if (iVar3 != 0) {
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      uVar4 = *(undefined4 *)(iVar3 + 0x1c);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x4c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_01dbb000(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02139cf4(iVar3,0);
      iVar5 = func_0x020d80e4(0x15,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar5 + 0x1c) = param_1;
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x58);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_01dc50c4(iVar6,uVar8,uVar4,0,0);
      if (iVar6 < 1) {
        if (*(int *)(**(int **)(_UNK_02601dcc + 0x2601d48) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = 0;
        func_0x028c2944(**(undefined4 **)(_UNK_02601dd0 + 0x2601d6c),0);
      }
      else {
        piVar10 = *(int **)(_UNK_02601dd4 + 0x2601b44);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd7838(iVar6,param_4,param_5,param_6,0x3f800000,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x020e2888(iVar3,iVar6,0x11,iVar5,0);
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x58);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01dc688c(iVar5,iVar6,&uStack_28,&uStack_2c,0);
        uVar2 = 1;
        func_0x019b76d4(param_1,1,iVar6,*(undefined4 *)(iVar1 + 0xc),*(int *)(param_1 + 0x48) + 1,
                        *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),uStack_2c,
                        *(int *)(param_1 + 0x48) == 2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd7dfc(0);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar10 = *(int **)(_UNK_02601dd8 + 0x2601c78);
          iVar3 = *(int *)(iVar1 + 0x40);
          iVar1 = *piVar10;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar10;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x24c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 1;
          uVar4 = func_0x01cdcbac(iVar3,iVar6,1,uVar4,0,0,0,0x13d,
                                  **(undefined4 **)(_UNK_02601ddc + 0x2601cc0),
                                  **(undefined4 **)(_UNK_02601de0 + 0x2601ccc),0);
          if (*(int *)(**(int **)(_UNK_02601de4 + 0x2601d04) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0206de24(uVar4,param_4,param_5,param_6,0,0,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3f74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02214384(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar2;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass50_0$$.ctor RVA 0x25f1de8 =====

void FUN_02601de8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityOrderRate$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x25f1df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02601df0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_02602044 + 0x2601e10);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02602048 + 0x2601e24));
    func_0x01384978(*(undefined4 *)(_UNK_0260204c + 0x2601e30));
    func_0x01384978(*(undefined4 *)(_UNK_02602050 + 0x2601e3c));
    func_0x01384978(*(undefined4 *)(_UNK_02602054 + 0x2601e48));
    func_0x01384978(*(undefined4 *)(_UNK_02602058 + 0x2601e54));
    func_0x01384978(*(undefined4 *)(_UNK_0260205c + 0x2601e60));
    func_0x01384978(*(undefined4 *)(_UNK_02602060 + 0x2601e6c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3f7a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02602064 + 0x2601ed0));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02602068 + 0x2601ef8);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,4,0);
    iVar4 = *(int *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0244fc34(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450178(iVar4,**(undefined4 **)(_UNK_0260206c + 0x2601f68),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x02f67194(iVar4,**(undefined4 **)(_UNK_02602070 + 0x2601f8c));
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar5 + 0x178))(piVar5,0,0,0,0,*(undefined4 *)(*piVar5 + 0x17c));
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_02602074 + 0x2601fdc));
    uVar7 = *(undefined4 *)(param_1 + 0x84);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02602078 + 0x2601ff4));
    func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_0260207c + 0x2602010),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar7,uVar3,uVar6,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x3f7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0$$.ctor RVA 0x25f2080 =====

void FUN_02602080(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityOrderRate$$<OnFlyIconStart>b__44_0 RVA 0x25f2088 =====

void FUN_02602088(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  iVar1 = func_0x0229f06c(0x15e,0,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01e7e874(iVar1,0);
    func_0x02b64b60(param_1 + 0x60,iVar1,uVar2,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x15e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217c17c(iVar1,param_1 + 0x60,0,0,0);
  }
  return;
}



// ===== FAT.ActivityOrderRate$$<>iFixBaseProxy_SetupFresh RVA 0x25f20b0 =====

void FUN_026020b0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ActivityOrderRate$$<>iFixBaseProxy_AfterLoad RVA 0x25f20b8 =====

void FUN_026020b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x1f1,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.ActivityOrderRate$$<>iFixBaseProxy_WhenEnd RVA 0x25f20c0 =====

void FUN_026020c0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityOrderRate$$<>iFixBaseProxy_WhenReset RVA 0x25f20c8 =====

void FUN_026020c8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityOrderRate.<>c__DisplayClass50_0$$<TryClaimReward>b__0 RVA 0x25f20d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_026020d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02602150 + 0x26020e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02602154 + 0x26020fc));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0364c54c(iVar2,uVar1,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_02602158 + 0x2602144) + 0x10) + 0x60)
                           + 0x84));
  return iVar2 != -1;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass50_0$$<TryClaimReward>b__1 RVA 0x25f215c =====

bool FUN_0260215c(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = false;
  if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0xc)) {
    bVar1 = *(int *)(param_2 + 0x14) == *(int *)(param_1 + 0x10);
  }
  return bVar1;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x25f21a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026021a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02602740 + 0x26021bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02602744 + 0x26021d0));
    func_0x01384978(*(undefined4 *)(_UNK_02602748 + 0x26021dc));
    func_0x01384978(*(undefined4 *)(_UNK_0260274c + 0x26021e8));
    func_0x01384978(*(undefined4 *)(_UNK_02602750 + 0x26021f4));
    func_0x01384978(*(undefined4 *)(_UNK_02602754 + 0x2602200));
    func_0x01384978(*(undefined4 *)(_UNK_02602758 + 0x260220c));
    func_0x01384978(*(undefined4 *)(_UNK_0260275c + 0x2602218));
    func_0x01384978(*(undefined4 *)(_UNK_02602760 + 0x2602224));
    func_0x01384978(*(undefined4 *)(_UNK_02602764 + 0x2602230));
    func_0x01384978(*(undefined4 *)(_UNK_02602768 + 0x260223c));
    func_0x01384978(*(undefined4 *)(_UNK_0260276c + 0x2602248));
    func_0x01384978(*(undefined4 *)(_UNK_02602770 + 0x2602254));
    func_0x01384978(*(undefined4 *)(_UNK_02602774 + 0x2602260));
    func_0x01384978(*(undefined4 *)(_UNK_02602778 + 0x260226c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0260277c + 0x2602280));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0x10) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(param_2,0,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar5,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar4,uStack_2c,uStack_28,uStack_24,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,1,0);
  iVar4 = func_0x02fd6f60(*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_02602780 + 0x2602374));
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x84);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0266fcac(iVar4,uVar6,0x40400000,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_02602784 + 0x26023f8);
  iVar4 = func_0x02450178(iVar4,*puVar7,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02f67194(iVar4,**(undefined4 **)(_UNK_02602788 + 0x2602418));
  *(int *)(iVar1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x02455344(iVar4,**(undefined4 **)(_UNK_0260278c + 0x2602448),0,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450178(iVar4,*puVar7,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02f67194(iVar4,**(undefined4 **)(_UNK_02602790 + 0x26024a8));
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar4 + 0x4c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar2 + 0xe8))(piVar2,uVar6,*(undefined4 *)(*piVar2 + 0xec));
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450178(iVar4,**(undefined4 **)(_UNK_02602794 + 0x2602528),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244ffd4(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,0,0);
  iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_02602798 + 0x2602578));
  uVar6 = func_0x026027c8(iVar1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01c36290(iVar4,uVar6,0);
  iVar4 = *(int *)(iVar1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  pcVar3 = (char *)(_UNK_0260279c + 0x26025d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_026027a0 + 0x26025e8));
    *pcVar3 = '\x01';
  }
  puVar7 = *(undefined4 **)(**(int **)(_UNK_026027a4 + 0x2602600) + 0x5c);
  uVar9 = *puVar7;
  uVar6 = puVar7[1];
  uVar8 = puVar7[2];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar4,uVar9,uVar6,uVar8,0);
  iVar4 = func_0x02cebcfc(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar4 != 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_026027a8 + 0x2602650));
    func_0x0244f5a0(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_1 + 0x10);
    *(int *)(iVar4 + 0x10) = iVar1;
    iVar1 = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x10);
    }
    puVar7 = *(undefined4 **)(_UNK_026027ac + 0x2602694);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar5 + 0x44);
    uVar6 = func_0x01384be4(*puVar7);
    func_0x02ce3d80(uVar6,iVar4,**(undefined4 **)(_UNK_026027b0 + 0x26026b8),0);
    func_0x0309eb60(iVar1,uVar6,**(undefined4 **)(_UNK_026027b4 + 0x26026d0));
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x10);
    }
    uVar6 = *puVar7;
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0x4c);
    uVar6 = func_0x01384be4(uVar6);
    func_0x02ce3d80(uVar6,iVar4,**(undefined4 **)(_UNK_026027b8 + 0x2602718),0);
    func_0x0309ead4(iVar1,uVar6,**(undefined4 **)(_UNK_026027bc + 0x2602730));
  }
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1$$.ctor RVA 0x25f27c0 =====

void FUN_026027c0(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>g__par|1 RVA 0x25f27c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_026027c8(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02602828 + 0x26027dc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0260282c + 0x26027f0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02602830 + 0x2602804));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_2$$.ctor RVA 0x25f2834 =====

void FUN_02602834(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>g__item|4 RVA 0x25f283c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0260283c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0260289c + 0x2602850);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_026028a0 + 0x2602864));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_026028a4 + 0x2602878));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$.ctor RVA 0x25f28a8 =====

void FUN_026028a8(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$System.IDisposable.Dispose RVA 0x25f28c4 =====

void FUN_026028c4(void)

{
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$MoveNext RVA 0x25f28c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_026028c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_02602a70 + 0x26028e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02602a74 + 0x26028f4));
    func_0x01384978(*(undefined4 *)(_UNK_02602a78 + 0x2602900));
    func_0x01384978(*(undefined4 *)(_UNK_02602a7c + 0x260290c));
    func_0x01384978(*(undefined4 *)(_UNK_02602a80 + 0x2602918));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244fc34(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450178(iVar2,**(undefined4 **)(_UNK_02602a8c + 0x26029fc),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x02f67194(iVar2,**(undefined4 **)(_UNK_02602a90 + 0x2602a20));
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar5 + 0x178))
              (piVar5,0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(*piVar5 + 0x17c));
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      piVar5 = *(int **)(_UNK_02602a84 + 0x2602948);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar5;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = *(undefined4 *)(iVar2 + 0x6c);
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02602a88 + 0x2602980));
      func_0x0245031c(uVar3,uVar1,0);
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar1;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x25f2a94 =====

undefined4 FUN_02602a94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$System.Collections.IEnumerator.Reset RVA 0x25f2a9c =====

undefined4 FUN_02602a9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam02602ad8 + 0x2602aac));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02602adc + 0x2602ac8));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_0.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__item|4>d$$System.Collections.IEnumerator.get_Current RVA 0x25f2ae0 =====

undefined4 FUN_02602ae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$.ctor RVA 0x25f2ae8 =====

void FUN_02602ae8(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$System.IDisposable.Dispose RVA 0x25f2b04 =====

void FUN_02602b04(void)

{
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$MoveNext RVA 0x25f2b08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02602b08(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_02602c84 + 0x2602b1c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02602c88 + 0x2602b30));
    func_0x01384978(*(undefined4 *)(_UNK_02602c8c + 0x2602b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02602c90 + 0x2602b48));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x024504c0(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02450178(iVar5,**(undefined4 **)(_UNK_02602c98 + 0x2602bf4),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0244ffd4(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,1,0);
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    func_0x01bf3284(iVar5,**(undefined4 **)(_UNK_02602c9c + 0x2602c74),0);
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02602c94 + 0x2602b78);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,0x3f800000,0);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x25f2ca0 =====

undefined4 FUN_02602ca0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$System.Collections.IEnumerator.Reset RVA 0x25f2ca8 =====

undefined4 FUN_02602ca8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam02602ce4 + 0x2602cb8));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02602ce8 + 0x2602cd4));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_1.<<FAT-Merge-ISpawnEffectWithTrail-AddTrail>g__par|1>d$$System.Collections.IEnumerator.get_Current RVA 0x25f2cec =====

undefined4 FUN_02602cec(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_2$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x25f2cf4 =====

void FUN_02602cf4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0245067c(&uStack_2c,iVar5,0);
  uVar3 = uStack_24;
  uVar2 = uStack_28;
  uVar1 = uStack_2c;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar4,uVar1,uVar2,uVar3,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar5,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar4,uStack_2c,uStack_28,uStack_24,0);
  return;
}



// ===== FAT.ActivityOrderRate.<>c__DisplayClass53_2$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__3 RVA 0x25f2e98 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02602e98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_026031ac + 0x2602eb0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_026031b0 + 0x2602ec4));
    func_0x01384978(*(undefined4 *)(_UNK_026031b4 + 0x2602ed0));
    func_0x01384978(*(undefined4 *)(_UNK_026031b8 + 0x2602edc));
    func_0x01384978(*(undefined4 *)(_UNK_026031bc + 0x2602ee8));
    func_0x01384978(*(undefined4 *)(_UNK_026031c0 + 0x2602ef4));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar2,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x30);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_2c,iVar5,0);
  uVar1 = uStack_28;
  uVar3 = uStack_2c;
  if (*(int *)(**(int **)(_UNK_026031c4 + 0x2602fa4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd876c(&uStack_2c,uVar3,uVar1,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar2,uStack_2c,uStack_28,uStack_24,0);
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_026031c8 + 0x2603008));
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = FUN_0260283c(iVar5);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01c36290(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 8);
  if (*(int *)(**(int **)(_UNK_026031cc + 0x2603074) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0145b1cc(uVar3,0,0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024504c0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450178(iVar2,**(undefined4 **)(_UNK_026031d0 + 0x26030ec),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar2,0,0);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = iVar5;
  if (iVar5 == 0) {
    func_0x01384bf0();
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar6 = *(int *)(iVar2 + 0x10);
  iVar2 = *(int *)(iVar5 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar6 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02455344(iVar2,**(undefined4 **)(_UNK_026031d4 + 0x2603198),iVar5 + 1,0);
  return;
}


