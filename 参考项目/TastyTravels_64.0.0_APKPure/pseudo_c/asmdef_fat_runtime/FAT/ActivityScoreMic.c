/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityScoreMic$$get_Valid RVA 0x2744f48 =====

undefined4 FUN_02754f48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x4cdc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cdc,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar4 + 0x130))(piVar4,*(undefined4 *)(*piVar4 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x3c) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$get_Conf RVA 0x2744fd8 =====

undefined4 FUN_02754fd8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.ActivityScoreMic$$set_Conf RVA 0x2744fe0 =====

void FUN_02754fe0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$GetCurDetailConfig RVA 0x2744fe8 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02754fe8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x6e7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6e7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021936c0 + 0x21935e0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021936c4 + 0x21935f4),param_1,0);
      *pcVar8 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021936c8 + 0x21936b0));
    return uVar9;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x6e8,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_0185af24 + 0x185aec8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0185af28 + 0x185aedc),0);
      func_0x01384978(*(undefined4 *)(_UNK_0185af2c + 0x185aee8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0185af30 + 0x185aefc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_0185af34 + 0x185af18);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  iVar7 = func_0x0229f13c(0x6e8,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_021935b8 + 0x21934c4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021935bc + 0x21934d8),iVar2,uVar9,0);
    *pcVar8 = '\x01';
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar6 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021935c0 + 0x21935a8));
  return uVar9;
}



// ===== FAT.ActivityScoreMic$$.ctor RVA 0x2745074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755074(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02755248 + 0x2755090);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0275524c + 0x27550a4));
    func_0x01384978(*(undefined4 *)(_UNK_02755250 + 0x27550b0));
    func_0x01384978(*(undefined4 *)(_UNK_02755254 + 0x27550bc));
    func_0x01384978(*(undefined4 *)(_UNK_02755258 + 0x27550c8));
    func_0x01384978(*(undefined4 *)(_UNK_0275525c + 0x27550d4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_02755260 + 0x27550e8);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  func_0x02b64854(&uStack_28,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x39c),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0x4c) = uStack_20;
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(uStack_24,uStack_28);
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x02b64854(&uStack_38,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x398),0);
  puVar2 = *(undefined4 **)(_UNK_02755264 + 0x2755168);
  *(undefined4 *)(param_1 + 0x58) = uStack_30;
  *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_34,uStack_38);
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar3,**(undefined4 **)(_UNK_02755268 + 0x2755184));
  puVar7 = *(undefined4 **)(_UNK_0275526c + 0x2755198);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uVar3 = func_0x01384be4(*puVar7);
  puVar2 = *(undefined4 **)(_UNK_02755270 + 0x27551b0);
  func_0x03d63eec(uVar3,*puVar2);
  uVar4 = *puVar7;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x03d63eec(uVar3,*puVar2);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
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
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01ca85ac(iVar1,uVar3,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  return;
}



// ===== FAT.ActivityScoreMic$$SetupFresh RVA 0x2745274 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755274(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined1 uStack_19;
  
  pcVar4 = (char *)(_UNK_027553d8 + 0x275528c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027553dc + 0x27552a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4cdd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cdd,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01cf6408(iVar1,uVar5,0);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  func_0x027553e4(param_1);
  func_0x02755504(param_1);
  func_0x027556b8(param_1);
  func_0x027557d0(param_1);
  func_0x027558c0(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  iVar1 = *(int *)(iVar1 + 0xfc);
  uStack_19 = 0;
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_027553e0 + 0x2755394),&uStack_19);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01e7437c(iVar1,uVar2,0xffffffff,uVar5);
  return;
}



// ===== FAT.ActivityScoreMic$$_RefreshPopupInfo RVA 0x27453e4 =====

void FUN_027553e4(int *param_1)

{
  int iVar1;
  undefined8 uStack_28;
  int iStack_20;
  
  uStack_28 = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x4cde,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar1 = param_1[0xf];
      uStack_28 = *(undefined8 *)(param_1 + 0x11);
      iStack_20 = param_1[0x13];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x1c),param_1,0,1,0);
      iVar1 = param_1[0x13];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar1 + 0x3a) = 1;
      *(undefined2 *)(iVar1 + 0x38) = 0;
      iVar1 = param_1[0xf];
      uStack_28 = *(undefined8 *)(param_1 + 0x14);
      iStack_20 = param_1[0x16];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x20),param_1,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4cde,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_RefreshScoreEntity RVA 0x2745504 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755504(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar4 = (char *)(_UNK_0275569c + 0x275551c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027556a0 + 0x2755530));
    func_0x01384978(*(undefined4 *)(_UNK_027556a4 + 0x275553c));
    func_0x01384978(*(undefined4 *)(_UNK_027556a8 + 0x2755548));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ce0,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (iVar1 = FUN_02754fe8(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_027556ac + 0x27555cc));
      func_0x02afb3e0(iVar1,0);
      *(int *)(param_1 + 0x70) = iVar1;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    iVar3 = iVar6;
    if (iVar6 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar3 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    piVar9 = *(int **)(_UNK_027556b0 + 0x2755610);
    uVar2 = *(undefined4 *)(iVar3 + 0x28);
    uVar8 = *(undefined4 *)(iVar6 + 0x30);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar9;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_027556b4 + 0x2755658);
    uStack_34 = 6;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_3c = 1;
    uStack_38 = 1;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_48 = uVar2;
    uStack_44 = uVar7;
    func_0x02af6c48(iVar1,uVar5,param_1,uVar8);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_RefreshAllRangeInfo RVA 0x27456b8 =====

/* WARNING: Possible PIC construction at 0x027557a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x027557ac) */
/* WARNING: Removing unreachable block (ram,0x02758764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027556b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  
  pcVar10 = (char *)(_UNK_027557c4 + 0x27556cc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027557c8 + 0x27556e0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ce1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    puStack_2c = (undefined4 *)uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar11,&iStack_30,uVar6,0,0);
    return;
  }
  iVar1 = param_1[0x21];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar12 = *(undefined4 **)(_UNK_027557cc + 0x275574c);
  func_0x03d64b20(iVar1,*puVar12);
  iVar1 = param_1[0x22];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,*puVar12);
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 == 0) {
    return;
  }
  iStack_30 = FUN_02754fe8(param_1);
  if (iStack_30 == 0) {
    return;
  }
  piVar4 = *(int **)(iStack_30 + 0x18);
  piVar3 = (int *)param_1[0x21];
  pcVar10 = (char *)(_UNK_02758848 + 0x27583d0);
  piStack_34 = param_1;
  puStack_2c = puVar12;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0275884c + 0x27583e4));
    func_0x01384978(*(undefined4 *)(_UNK_02758850 + 0x27583f0));
    func_0x01384978(*(undefined4 *)(_UNK_02758854 + 0x27583fc));
    func_0x01384978(*(undefined4 *)(_UNK_02758858 + 0x2758408));
    func_0x01384978(*(undefined4 *)(_UNK_0275885c + 0x2758414));
    func_0x01384978(*(undefined4 *)(_UNK_02758860 + 0x2758420));
    func_0x01384978(*(undefined4 *)(_UNK_02758864 + 0x275842c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce2,0);
  if (iVar1 == 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02758868 + 0x27584a0)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_027584e8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02758868 + 0x27584a0),0);
LAB_027584e8:
    piVar4 = (int *)(*(code *)*puVar12)(piVar4,puVar12[1]);
    piVar7 = *(int **)(_UNK_0275886c + 0x2758508);
LAB_02758504:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar12 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_02758560;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar4,*piVar7,0);
LAB_02758560:
    iVar1 = (*(code *)*puVar12)(piVar4,puVar12[1]);
    if (iVar1 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02758870 + 0x2758594)) {
            puVar12 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_027585dc;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02758870 + 0x2758594),0);
LAB_027585dc:
      uVar11 = (*(code *)*puVar12)(piVar4,puVar12[1]);
      if (*(int *)(**(int **)(_UNK_02758874 + 0x27585fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_40,uVar11,0);
      iVar1 = iStack_38;
      uVar5 = uStack_3c;
      uVar11 = uStack_40;
      if (0 < iStack_38) {
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02758878 + 0x275863c));
        func_0x028ba1c4(iVar9,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar9 + 8) = uVar11;
        if (0x7ffffffe < uVar5) {
          uVar5 = 0x7fffffff;
        }
        *(uint *)(iVar9 + 0xc) = uVar5;
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0275887c + 0x2758684)) {
              puVar12 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xe8);
              goto LAB_027586cc;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar12 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0275887c + 0x2758684),5);
LAB_027586cc:
        (*(code *)*puVar12)(piVar3,iVar1,iVar9,puVar12[1]);
      }
      goto LAB_02758504;
    }
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_02758880 + 0x2758704)) {
            puVar12 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
            goto LAB_0275874c;
          }
          uVar5 = uVar5 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02758880 + 0x2758704),0);
LAB_0275874c:
      (*(code *)*puVar12)(piVar4,puVar12[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4ce2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_48 = 0;
    func_0x02174858(iVar1,param_1,piVar3,piVar4);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_RefreshSpawnBonusHandler RVA 0x27457d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027557d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_027558b4 + 0x27557e4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027558b8 + 0x27557f8));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4ce3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4ce3,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_027558bc + 0x275585c));
    func_0x0215d6e4(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar10;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x7c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16b4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16b4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityScoreMic$$_RefreshDisposeBonusHandler RVA 0x27458c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027558c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_027559a4 + 0x27558d4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027559a8 + 0x27558e8));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4ce4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4ce4,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_027559ac + 0x275594c));
    func_0x0210c848(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0x80) = uVar10;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x80);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbbd70 + 0x1dbbc6c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbd74 + 0x1dbbc80),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbbd78 + 0x1dbbc8c));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x4ce5,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x4ce5,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x38),piVar6,
                          **(undefined4 **)(_UNK_01dbbd7c + 0x1dbbcec));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbd80 + 0x1dbbd14)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbbd5c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbbd80 + 0x1dbbd14),2);
LAB_01dbbd5c:
                    /* WARNING: Could not recover jumptable at 0x01dbbd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityScoreMic$$SaveSetup RVA 0x27459b0 =====

/* WARNING: Possible PIC construction at 0x02755a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02755aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02755ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02755aa4) */
/* WARNING: Removing unreachable block (ram,0x02755ac0) */
/* WARNING: Removing unreachable block (ram,0x02755ac4) */
/* WARNING: Removing unreachable block (ram,0x02755a74) */
/* WARNING: Removing unreachable block (ram,0x02755a90) */
/* WARNING: Removing unreachable block (ram,0x02755a94) */
/* WARNING: Removing unreachable block (ram,0x02755ad4) */
/* WARNING: Removing unreachable block (ram,0x02755af0) */
/* WARNING: Removing unreachable block (ram,0x02755af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027559b0(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_02755b08 + 0x27559c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02755b0c + 0x27559dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ce6,0);
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
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x40),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_02755b10 + 0x2755a70);
  iVar3 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityScoreMic$$LoadSetup RVA 0x2745b14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755b14(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x4ce7,0);
  if (iVar2 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = param_2[10];
    uVar9 = func_0x01c23c30(0,iVar2,0);
    *(undefined4 *)(param_1 + 0x40) = uVar9;
    uVar9 = func_0x01c23c30(1,iVar2,0);
    *(undefined4 *)(param_1 + 0x5c) = uVar9;
    uVar9 = func_0x01c23c30(2,iVar2,0);
    *(undefined4 *)(param_1 + 0x60) = uVar9;
    uVar9 = func_0x01c23c30(3,iVar2,0);
    *(undefined4 *)(param_1 + 100) = uVar9;
    *(undefined4 *)(param_1 + 0x6c) = uVar9;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
    FUN_027553e4(param_1);
    FUN_02755504(param_1);
    FUN_027556b8(param_1);
    FUN_027557d0(param_1);
    pcVar8 = (char *)(_UNK_027559a4 + 0x27558d4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_027559a8 + 0x27558e8));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x4ce4,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x4ce4,0);
      if (iVar2 == 0) {
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_30,param_1,0);
      iVar3 = *(int *)(iVar2 + 8);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 2;
      if (iVar2 == 0) {
        uVar6 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar3,uVar9,&uStack_30,uVar6);
      return;
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_027559ac + 0x275594c));
      func_0x0210c848(uVar9,param_1,0);
      *(undefined4 *)(param_1 + 0x80) = uVar9;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    param_2 = *(int **)(param_1 + 0x80);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01dbbd70 + 0x1dbbc6c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbbd74 + 0x1dbbc80),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dbbd78 + 0x1dbbc8c));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x4ce5,0);
    if (iVar3 == 0) {
      iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x38),param_2,
                              **(undefined4 **)(_UNK_01dbbd7c + 0x1dbbcec));
      if (param_2 == (int *)0x0 || iVar2 == 0) {
        return;
      }
      iVar2 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01dbbd80 + 0x1dbbd14)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
            goto LAB_01dbbd5c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbbd80 + 0x1dbbd14),2);
LAB_01dbbd5c:
                    /* WARNING: Could not recover jumptable at 0x01dbbd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_2,puVar1[1]);
      return;
    }
    iVar3 = func_0x0229f13c(0x4ce5,0);
    param_1 = iVar2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x4ce7,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
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
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.ActivityScoreMic$$WhenActive RVA 0x2745c00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755c00(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x4cea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cea,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0229f06c(0x4ceb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ceb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  iVar1 = func_0x02756bac(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x19d,0);
  if (iVar5 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar5 = func_0x03668dfc(*puVar3);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01c36988(iVar5,0);
    if (iVar5 != 0) {
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x1a9,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar5) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1a9,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar5,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x19d,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar5,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_CheckEndWhenActive RVA 0x2745c60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755c60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar1 = func_0x0229f06c(0x4ceb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ceb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x02756bac(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x19d,0);
  if (iVar5 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar5 = func_0x03668dfc(*puVar3);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01c36988(iVar5,0);
    if (iVar5 != 0) {
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x1a9,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar5) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1a9,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar5,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x19d,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar5,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$WhenReset RVA 0x2745cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755cfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02755dc8 + 0x2755d10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02755dcc + 0x2755d24));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ced,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ced,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x02755dd0(param_1);
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    return;
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_ClearScoreEntity RVA 0x2745dd0 =====

void FUN_02755dd0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4cee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cee,0);
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
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x02af7520(*(int *)(param_1 + 0x70),0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// ===== FAT.ActivityScoreMic$$WhenEnd RVA 0x2745e3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02755e3c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_0275611c + 0x2755e54);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756120 + 0x2755e68));
    func_0x01384978(*(undefined4 *)(_UNK_02756124 + 0x2755e74));
    func_0x01384978(*(undefined4 *)(_UNK_02756128 + 0x2755e80));
    func_0x01384978(*(undefined4 *)(_UNK_0275612c + 0x2755e8c));
    func_0x01384978(*(undefined4 *)(_UNK_02756130 + 0x2755e98));
    func_0x01384978(*(undefined4 *)(_UNK_02756134 + 0x2755ea4));
    func_0x01384978(*(undefined4 *)(_UNK_02756138 + 0x2755eb0));
    *pcVar2 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x4cef,0);
  if (iVar1 == 0) {
    func_0x02756158(param_1);
    func_0x027561ec(param_1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_0275613c + 0x2755f38);
    iVar3 = *(int *)(iVar1 + 0x4c);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02756140 + 0x2755f84));
      func_0x03ccb96c(iVar4,uVar6,**(undefined4 **)(_UNK_02756144 + 0x2755fa4),0);
      *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar4;
    }
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbc73c(iVar3,iVar4,1,3,0);
    if (*(int *)(param_1 + 0x3c) != 0) {
      if (*(int *)(**(int **)(_UNK_02756148 + 0x2755ff8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(auStack_30,iVar1,&uStack_24,**(undefined4 **)(_UNK_0275614c + 0x2756034));
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = uStack_24;
      piVar7 = *(int **)(_UNK_02756150 + 0x2756060);
      uVar5 = *(undefined4 *)(iVar1 + 0x24);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      func_0x02b4aed4(uVar5,uVar6,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x29c),0,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      iVar1 = *(int *)(iVar1 + 0xfc);
      uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02756154 + 0x27560cc),auStack_30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar5,0,uVar6,0);
    }
    FUN_02755dd0(param_1);
    func_0x02756280(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x4cef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_ClearSpawnBonusHandler RVA 0x2746158 =====

void FUN_02756158(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4cf0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cf0,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbba60(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



// ===== FAT.ActivityScoreMic$$_ClearDisposeBonusHandler RVA 0x27461ec =====

void FUN_027561ec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4cf1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cf1,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbbd84(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



// ===== FAT.ActivityScoreMic$$_TryCommitReward RVA 0x2746280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02756280(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_027564c8 + 0x2756298);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027564cc + 0x27562ac));
    func_0x01384978(*(undefined4 *)(_UNK_027564d0 + 0x27562b8));
    func_0x01384978(*(undefined4 *)(_UNK_027564d4 + 0x27562c4));
    func_0x01384978(*(undefined4 *)(_UNK_027564d8 + 0x27562d0));
    func_0x01384978(*(undefined4 *)(_UNK_027564dc + 0x27562dc));
    func_0x01384978(*(undefined4 *)(_UNK_027564e0 + 0x27562e8));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x4cfb,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_027564e4 + 0x2756380));
      puVar5 = *(undefined4 **)(_UNK_027564e8 + 0x2756394);
      while (iVar2 = func_0x03f5f428(&uStack_28,*puVar5), uVar1 = uStack_1c, iVar2 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar1,0);
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_027564ec + 0x27563f0));
      iVar2 = *(int *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar3) {
        func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x4cfb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$get_Visual RVA 0x27464f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027564f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x4cfc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cfc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.ActivityScoreMic$$get_MainPopup RVA 0x274654c =====

void FUN_0275654c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityScoreMic$$get_SettlePopup RVA 0x2746560 =====

void FUN_02756560(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x58);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityScoreMic$$Open RVA 0x2746574 =====

void FUN_02756574(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x4cfd,0);
  if (iVar1 == 0) {
    uStack_20 = *(undefined8 *)(param_1 + 0x44);
    uStack_18 = *(undefined4 *)(param_1 + 0x4c);
    func_0x02b4d8a0(param_1,&uStack_20,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x4cfd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$FAT.IBoardEntry.BoardEntryAsset RVA 0x27465ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027565ec(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_027566b4 + 0x2756604);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027566b8 + 0x2756618));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x4cfe,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_027566bc + 0x275669c),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x4cfe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityScoreMic$$GetScoreTextStyleKey RVA 0x27466c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027566c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02756770 + 0x27566d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756774 + 0x27566ec));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4cff,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02756778 + 0x2756748);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    if (param_2 == 0) {
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    }
    else {
      uVar5 = (*(undefined4 **)(iVar1 + 0x5c))[1];
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x4cff,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02173d4c + 0x2173c58);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173d50 + 0x2173c6c),param_1,param_2,0);
    *pcVar6 = '\x01';
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
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173d54 + 0x2173d3c));
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$get_TotalScore RVA 0x274677c =====

undefined4 FUN_0275677c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.ActivityScoreMic$$set_TotalScore RVA 0x2746784 =====

void FUN_02756784(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$get_CurMilestoneLevel RVA 0x274678c =====

undefined4 FUN_0275678c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.ActivityScoreMic$$set_CurMilestoneLevel RVA 0x2746794 =====

void FUN_02756794(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$get_CurMilestoneNum RVA 0x274679c =====

undefined4 FUN_0275679c(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.ActivityScoreMic$$set_CurMilestoneNum RVA 0x27467a4 =====

void FUN_027567a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$get_LastMilestoneLevel RVA 0x27467ac =====

undefined4 FUN_027567ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.ActivityScoreMic$$set_LastMilestoneLevel RVA 0x27467b4 =====

void FUN_027567b4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$get_LastMilestoneNum RVA 0x27467bc =====

undefined4 FUN_027567bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.ActivityScoreMic$$set_LastMilestoneNum RVA 0x27467c4 =====

void FUN_027567c4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



// ===== FAT.ActivityScoreMic$$PopCommitDataList RVA 0x27467cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027567cc(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_0275694c + 0x27567e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756950 + 0x27567fc));
    func_0x01384978(*(undefined4 *)(_UNK_02756954 + 0x2756808));
    func_0x01384978(*(undefined4 *)(_UNK_02756958 + 0x2756814));
    func_0x01384978(*(undefined4 *)(_UNK_0275695c + 0x2756820));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x4d00,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02756960 + 0x275688c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_20,iVar1,&iStack_14,**(undefined4 **)(_UNK_02756964 + 0x27568c8));
    iVar1 = iStack_14;
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    uVar3 = *(undefined4 *)(param_2 + 0x78);
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar3,**(undefined4 **)(_UNK_02756968 + 0x27568fc));
    iVar1 = *(int *)(param_2 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4d00,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02223248(&uStack_20,iVar1,param_2,0);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
  }
  return;
}



// ===== FAT.ActivityScoreMic$$OnMainUIClose RVA 0x274696c =====

void FUN_0275696c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4d01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d01,0);
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
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 100);
  return;
}



// ===== FAT.ActivityScoreMic$$TryPopupLevelUp RVA 0x27469c4 =====

void FUN_027569c4(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6ee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6ee,0);
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
  iVar1 = func_0x02b48934(param_1,0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x74) != '\0') {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x01e7437c(iVar1,uVar4,0xffffffff,0);
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return;
}



// ===== FAT.ActivityScoreMic$$CheckCanEnd RVA 0x2746a90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02756a90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02756ba0 + 0x2756aa4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756ba4 + 0x2756ab8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d02,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d02,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02756ba8 + 0x2756b10));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01c36988(iVar1,0);
  if ((iVar1 == 0) || (iVar1 = func_0x02b48934(param_1,0), iVar1 == 0)) {
    return;
  }
  iVar1 = func_0x02756bac(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar6 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x19d,0);
  if (iVar5 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar5 = func_0x03668dfc(*puVar3);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01c36988(iVar5,0);
    if (iVar5 != 0) {
      pcVar6 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar6 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x1a9,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar5) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1a9,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar5,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x19d,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar5,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$IsComplete RVA 0x2746bac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02756bac(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02756c60 + 0x2756bc0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756c64 + 0x2756bd4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4cec,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4cec,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar2 = FUN_02754fe8(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0xc) <= *(int *)(param_1 + 0x60));
}



// ===== FAT.ActivityScoreMic$$TryAddToken RVA 0x2746c68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02756c68(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar2 = (char *)(_UNK_02756e5c + 0x2756c88);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756e60 + 0x2756ca0));
    func_0x01384978(*(undefined4 *)(_UNK_02756e64 + 0x2756cac));
    *pcVar2 = '\x01';
  }
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x6d8,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if ((0 < iVar1) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 0)) {
      iStack_28 = 1;
      if (*(int *)(iVar1 + 0x30) != param_2) {
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0345efbc(iVar1,param_2,&iStack_28,
                                **(undefined4 **)(_UNK_02756e68 + 0x2756d68));
        if (iVar1 == 0) {
          return;
        }
      }
      iVar4 = iStack_28 * param_3;
      iVar1 = func_0x02756e70(param_1,iVar4);
      if (iVar1 != 0) {
        piVar3 = *(int **)(_UNK_02756e6c + 0x2756da0);
        iVar1 = *piVar3;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar3;
        }
        if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x2a0)) {
          iVar1 = *(int *)(param_1 + 0x70);
          uVar5 = *(undefined4 *)(param_1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02af96e4(iVar1,uVar5,0);
          func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0x5c),param_4,0);
        }
        uVar5 = func_0x02756fa0(param_1,param_2,&uStack_2c);
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x019a72e0(param_1,*(undefined4 *)(iVar1 + 0x30),param_4,1,iVar4,uVar5,0);
        func_0x027571e0(param_1,iVar4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$_TryAddScore RVA 0x2746e70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02756e70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02756f84 + 0x2756e88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02756f88 + 0x2756e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02756f8c + 0x2756ea8));
    func_0x01384978(*(undefined4 *)(_UNK_02756f90 + 0x2756eb4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x6da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6da,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  if (0 < param_2) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar1 = **(int **)(_UNK_02756f94 + 0x2756f1c);
    *(int *)(param_1 + 0x5c) = iVar3 + param_2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02756f98 + 0x2756f44));
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a0af8(iVar1,iVar3,uVar5,**(undefined4 **)(_UNK_02756f9c + 0x2756f70));
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$CheckTokenMultiRate RVA 0x2746fa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02756fa0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_027571bc + 0x2756fc0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027571c0 + 0x2756fd4));
    func_0x01384978(*(undefined4 *)(_UNK_027571c4 + 0x2756fe0));
    func_0x01384978(*(undefined4 *)(_UNK_027571c8 + 0x2756fec));
    func_0x01384978(*(undefined4 *)(_UNK_027571cc + 0x2756ff8));
    func_0x01384978(*(undefined4 *)(_UNK_027571d0 + 0x2757004));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6dd,0);
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(_UNK_027571d4 + 0x275706c);
    *param_3 = 1;
    iVar1 = func_0x03668dfc(*puVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar4 = func_0x021419d0(iVar1,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0215e684(iVar4,0);
      if (iVar4 != 0) {
        iVar4 = func_0x02139cf4(iVar1,0);
        iVar1 = func_0x021419d0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = 0;
        uVar2 = func_0x0215e630(iVar1,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x020dfd3c(iVar4,uVar2,0);
        uVar2 = 1;
        if (iVar1 != 0) {
          iVar6 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_027571d8 + 0x2757138));
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar1 = func_0x021378d4(iVar6,0);
            if (iVar1 != 0) {
              uStack_24 = 0;
              uStack_28 = 0;
              func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 0x28),
                              **(undefined4 **)(_UNK_027571dc + 0x275716c));
              uVar2 = uStack_24;
              if ((char)uStack_28 == '\0') {
                uVar2 = 1;
              }
            }
          }
        }
        *param_3 = uVar2;
        uVar2 = func_0x02165c58(iVar6,param_2,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6dd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02175dd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityScoreMic$$_UpdateMilestoneInfo RVA 0x27471e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027571e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_027575c8 + 0x27571fc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027575cc + 0x2757210));
    func_0x01384978(*(undefined4 *)(_UNK_027575d0 + 0x275721c));
    func_0x01384978(*(undefined4 *)(_UNK_027575d4 + 0x2757228));
    func_0x01384978(*(undefined4 *)(_UNK_027575d8 + 0x2757234));
    func_0x01384978(*(undefined4 *)(_UNK_027575dc + 0x2757240));
    func_0x01384978(*(undefined4 *)(_UNK_027575e0 + 0x275724c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x027578b8(param_1,*(undefined4 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    param_2 = *(int *)(param_1 + 100) + param_2;
    if (param_2 < *(int *)(iVar1 + 0x1c)) {
      *(int *)(param_1 + 100) = param_2;
      return;
    }
    iVar1 = FUN_02754fe8(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x20);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = *(int *)(iVar5 + 0xc);
    iVar5 = func_0x027578b8(param_1,*(undefined4 *)(param_1 + 0x60));
    if (iVar5 != 0) {
      piVar10 = *(int **)(_UNK_027575e4 + 0x2757324);
      iStack_2c = iVar1;
      do {
        if (param_2 < *(int *)(iVar5 + 0x1c)) break;
        param_2 = param_2 - *(int *)(iVar5 + 0x1c);
        piVar2 = *(int **)(_UNK_027575e8 + 0x2757340);
        uVar8 = *(undefined4 *)(iVar5 + 0x18);
        *(undefined1 *)(param_1 + 0x74) = 1;
        iVar5 = *piVar2;
        *(int *)(param_1 + 100) = param_2;
        iVar3 = *(int *)(iVar5 + 0x74);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        if (iVar3 == 0) {
          func_0x01384ab4(iVar5);
        }
        iVar5 = func_0x02565a88(uVar8,0);
        if (iVar5 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar10;
          uVar8 = *(undefined4 *)(iVar5 + 8);
          uVar4 = *(undefined4 *)(iVar5 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x40);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar10;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x298);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = **(undefined4 **)(_UNK_027575ec + 0x27573ec);
          uStack_34 = **(undefined4 **)(_UNK_027575f0 + 0x27573f8);
          uStack_3c = 0x1a6;
          uStack_30 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uVar8 = func_0x01cdcbac(iVar1,uVar8,uVar4,uVar6);
          iVar1 = *(int *)(param_1 + 0x78);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar1 + 8);
          uVar7 = *(uint *)(iVar1 + 0xc);
          piVar10 = *(int **)(_UNK_027575f4 + 0x2757454);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar3 = *piVar10;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar7 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar7 + 1;
            *(undefined4 *)(iVar5 + uVar7 * 4 + 0x10) = uVar8;
          }
          else {
            func_0x0328f170(iVar1,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
          }
          piVar10 = *(int **)(_UNK_027575f8 + 0x27574ac);
          iVar1 = iStack_2c;
        }
        uStack_48 = (uint)(*(int *)(param_1 + 0x60) == iStack_28);
        uStack_44 = 0;
        func_0x019a714c(param_1,*(int *)(param_1 + 0x60),iStack_28,*(undefined4 *)(iVar1 + 0x1c));
        iVar5 = func_0x027578b8(param_1,*(undefined4 *)(param_1 + 0x60));
      } while (iVar5 != 0);
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01d64a88(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    if (iVar1 != 0) {
      iVar3 = func_0x02139cf4(iVar1,0);
      if (iVar5 != 0) goto FUN_027569c4;
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 8);
      }
      if (iVar3 == 0 || iVar5 == 1) {
        return;
      }
      iVar5 = func_0x02141ef4(iVar1,0);
    }
    if (iVar5 != 0) {
FUN_027569c4:
      iVar1 = func_0x0229f06c(0x6ee,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x6ee,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_30 = 0;
        func_0x0245494c(&uStack_48,0,0);
        uStack_30 = uStack_48;
        iStack_2c = uStack_44;
        iStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_30,param_1,0);
        iVar5 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 2;
        if (iVar1 == 0) {
          uVar4 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
        return;
      }
      iVar1 = func_0x02b48934(param_1,0);
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xfc);
          uVar8 = *(undefined4 *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01e7437c(iVar1,uVar8,0xffffffff,0);
        }
        *(undefined1 *)(param_1 + 0x74) = 0;
      }
      return;
    }
  }
  return;
}



// ===== FAT.ActivityScoreMic$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x27475fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027575fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_027578ac + 0x275761c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027578b0 + 0x2757634));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4d03,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4d03,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021d2b64(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x46);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    return 0;
  }
  uVar3 = func_0x02b449f8(param_1,0);
  iVar2 = func_0x01e4b758(param_2,uVar3,0);
  piVar8 = *(int **)(_UNK_027578b4 + 0x27576dc);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = **(int **)(iVar4 + 0x5c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01e4b23c(iVar4,param_2,0);
  if (iVar4 == 0) {
LAB_02757774:
    iVar4 = *(int *)(param_1 + 0x70);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02af99d0(iVar4,param_2,param_4,0);
    uVar3 = 1;
  }
  else {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar4 = func_0x01e4b2b0(iVar4,param_2,0);
    iVar5 = func_0x02b449f8(param_1,0);
    if (iVar4 != iVar5) goto LAB_02757774;
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_027577e0;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar2,param_2,0);
    if (iVar4 != 0) {
LAB_027577e0:
      uVar6 = 0;
      iVar4 = func_0x01e4b2b0(iVar2,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar5) goto LAB_02757890;
    }
  }
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = **(int **)(iVar4 + 0x5c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar4,param_2,0);
  uVar6 = func_0x02b449f8(param_1,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar2,param_2,uVar6,uStack_28,uStack_2c,0);
  uVar6 = 1;
LAB_02757890:
  iVar2 = func_0x01f2a218(0);
  if (iVar2 != 0) {
    uVar3 = uVar6;
  }
  return uVar3;
}



// ===== FAT.ActivityScoreMic$$GetMilestoneInfo RVA 0x27478b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027578b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_027579c8 + 0x27578d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027579cc + 0x27578e8));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6e6,0);
  if (iVar1 == 0) {
    iVar2 = FUN_02754fe8(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar1 = func_0x03005740(iVar1,param_2,&uStack_14,
                                **(undefined4 **)(_UNK_027579d0 + 0x2757978)), iVar1 != 0)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = uStack_14;
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01ca8674(iVar1,uVar4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6e6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021936cc(iVar1,param_1,param_2,0);
  }
  return uVar4;
}



// ===== FAT.ActivityScoreMic$$GetCurMilestoneInfo RVA 0x27479d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027579d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x4d04,0);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    pcVar4 = (char *)(_UNK_027579c8 + 0x27578d4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_027579cc + 0x27578e8));
      *pcVar4 = '\x01';
    }
    uVar2 = 0;
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x6e6,0);
    if (iVar1 == 0) {
      iVar3 = FUN_02754fe8(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      if ((iVar3 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x03005740(iVar1,uVar5,&uStack_14,
                                  **(undefined4 **)(_UNK_027579d0 + 0x2757978)), iVar1 != 0)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = uStack_14;
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01ca8674(iVar1,uVar5,0);
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x6e6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x021936cc(iVar1,param_1,uVar5,0);
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x4d04,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02223460 + 0x2223380);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02223464 + 0x2223394),param_1,0);
    *pcVar4 = '\x01';
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
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02223468 + 0x2223450));
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$GetCurMilestoneNumMax RVA 0x2747a30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02757a30(undefined4 param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_02757b5c + 0x2757a48);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02757b60 + 0x2757a5c));
    func_0x01384978(*(undefined4 *)(_UNK_02757b64 + 0x2757a68));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d05,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = FUN_02754fe8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  if (param_2 < *(int *)(iVar1 + 0xc)) {
    uVar4 = func_0x0364c9b8(iVar1,param_2,**(undefined4 **)(_UNK_02757b68 + 0x2757b00));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8674(iVar1,uVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.ActivityScoreMic$$CheckMainBoardTokenMultiRate RVA 0x2747b6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02757b6c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02757d90 + 0x2757b8c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02757d94 + 0x2757ba0));
    func_0x01384978(*(undefined4 *)(_UNK_02757d98 + 0x2757bac));
    func_0x01384978(*(undefined4 *)(_UNK_02757d9c + 0x2757bb8));
    func_0x01384978(*(undefined4 *)(_UNK_02757da0 + 0x2757bc4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d06,0);
  if (iVar1 == 0) {
    *param_3 = 1;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01db7b78(iVar1,0);
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar3 = func_0x021419d0(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0215e684(iVar3,0);
      if (iVar3 != 0) {
        iVar3 = func_0x02139cf4(iVar1,0);
        iVar1 = func_0x021419d0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = 0;
        uVar2 = func_0x0215e630(iVar1,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x020dfd3c(iVar3,uVar2,0);
        uVar2 = 1;
        if (iVar1 != 0) {
          iVar5 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_02757da4 + 0x2757d0c));
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar1 = func_0x021378d4(iVar5,0);
            if (iVar1 != 0) {
              uStack_24 = 0;
              uStack_28 = 0;
              func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 0x28),
                              **(undefined4 **)(_UNK_02757da8 + 0x2757d40));
              uVar2 = uStack_24;
              if ((char)uStack_28 == '\0') {
                uVar2 = 1;
              }
            }
          }
        }
        *param_3 = uVar2;
        uVar2 = func_0x02165c58(iVar5,param_2,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4d06,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02175dd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityScoreMic$$GetTokenIdForBubbleItem RVA 0x2747dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02757dac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0275802c + 0x2757dc8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02758030 + 0x2757ddc));
    func_0x01384978(*(undefined4 *)(_UNK_02758034 + 0x2757de8));
    func_0x01384978(*(undefined4 *)(_UNK_02758038 + 0x2757df4));
    func_0x01384978(*(undefined4 *)(_UNK_0275803c + 0x2757e00));
    func_0x01384978(*(undefined4 *)(_UNK_02758040 + 0x2757e0c));
    func_0x01384978(*(undefined4 *)(_UNK_02758044 + 0x2757e18));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar5 = 0;
  uStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x4d07,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b48934(param_1,0);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        iVar1 = *(int *)(param_1 + 0x70);
      }
      if (param_2 != 0 && iVar1 != 0) {
        uVar5 = 0;
        iVar1 = func_0x02116990(param_2,0);
        iVar4 = *(int *)(param_1 + 0x70);
        if (iVar1 != 0) {
          uVar5 = *(undefined4 *)(iVar1 + 0x28);
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02af9950(iVar4,8,uVar5,0);
        iVar4 = *(int *)(param_1 + 0x84);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03d64e30(&uStack_38,iVar4,**(undefined4 **)(_UNK_02758048 + 0x2757f1c));
        puVar6 = *(undefined4 **)(_UNK_0275804c + 0x2757f34);
        do {
          iVar2 = func_0x03f9b324(&uStack_38,*puVar6);
          iVar4 = iStack_28;
          uVar5 = uStack_2c;
          if (iVar2 == 0) {
            func_0x03f9b464(&uStack_38,**(undefined4 **)(_UNK_02758050 + 0x2757f94));
            return 0;
          }
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
        } while ((iVar1 < *(int *)(iVar4 + 8)) || (*(int *)(iVar4 + 0xc) < iVar1));
        func_0x03f9b464(&uStack_38,**(undefined4 **)(_UNK_0275805c + 0x2757f7c));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4d07,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0217bafc(iVar1,param_1,param_2,0);
  }
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$GetTokenIdForShopItem RVA 0x2748060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02758060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_027582b4 + 0x275807c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027582b8 + 0x2758090));
    func_0x01384978(*(undefined4 *)(_UNK_027582bc + 0x275809c));
    func_0x01384978(*(undefined4 *)(_UNK_027582c0 + 0x27580a8));
    func_0x01384978(*(undefined4 *)(_UNK_027582c4 + 0x27580b4));
    func_0x01384978(*(undefined4 *)(_UNK_027582c8 + 0x27580c0));
    func_0x01384978(*(undefined4 *)(_UNK_027582cc + 0x27580cc));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar5 = 0;
  uStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x4d09,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b48934(param_1,0);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        iVar1 = *(int *)(param_1 + 0x70);
      }
      if (param_2 != 0 && iVar1 != 0) {
        iVar1 = func_0x02af9950(iVar1,1,*(undefined4 *)(param_2 + 0x30),0);
        iVar3 = *(int *)(param_1 + 0x88);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03d64e30(&uStack_38,iVar3,**(undefined4 **)(_UNK_027582d0 + 0x27581a4));
        puVar6 = *(undefined4 **)(_UNK_027582d4 + 0x27581bc);
        do {
          iVar2 = func_0x03f9b324(&uStack_38,*puVar6);
          iVar3 = iStack_28;
          uVar5 = uStack_2c;
          if (iVar2 == 0) {
            func_0x03f9b464(&uStack_38,**(undefined4 **)(_UNK_027582d8 + 0x275821c));
            return 0;
          }
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
        } while ((iVar1 < *(int *)(iVar3 + 8)) || (*(int *)(iVar3 + 0xc) < iVar1));
        func_0x03f9b464(&uStack_38,**(undefined4 **)(_UNK_027582e4 + 0x2758204));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4d09,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0217bafc(iVar1,param_1,param_2,0);
  }
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$CheckCanSpawnOnBubble RVA 0x27482e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_027582e8(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x4d0a,0);
  if (iVar1 == 0) {
    iVar4 = func_0x02b48934(param_1,0);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x70);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      iVar1 = FUN_02754fe8(param_1);
      fVar7 = _UNK_027583ac;
      if (iVar1 != 0) {
        fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),
                                           (byte)(in_fpscr >> 0x16) & 3);
      }
      fVar2 = (float)func_0x024506f0(0,0x42c80000,0);
      uVar5 = (uint)(fVar2 < fVar7);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x4d0a,0);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  uVar5 = func_0x0245496c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.ActivityScoreMic$$_RefreshRangeInfo RVA 0x27483b0 =====

/* WARNING: Removing unreachable block (ram,0x02758764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027583b0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_02758848 + 0x27583d0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0275884c + 0x27583e4));
    func_0x01384978(*(undefined4 *)(_UNK_02758850 + 0x27583f0));
    func_0x01384978(*(undefined4 *)(_UNK_02758854 + 0x27583fc));
    func_0x01384978(*(undefined4 *)(_UNK_02758858 + 0x2758408));
    func_0x01384978(*(undefined4 *)(_UNK_0275885c + 0x2758414));
    func_0x01384978(*(undefined4 *)(_UNK_02758860 + 0x2758420));
    func_0x01384978(*(undefined4 *)(_UNK_02758864 + 0x275842c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce2,0);
  if (iVar1 == 0) {
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02758868 + 0x27584a0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_027584e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02758868 + 0x27584a0),0);
LAB_027584e8:
    piVar7 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
    piVar10 = *(int **)(_UNK_0275886c + 0x2758508);
LAB_02758504:
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_02758560;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_02758560:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 != 0) {
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02758870 + 0x2758594)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_027585dc;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02758870 + 0x2758594),0);
LAB_027585dc:
      uVar3 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (*(int *)(**(int **)(_UNK_02758874 + 0x27585fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_30,uVar3,0);
      iVar1 = iStack_28;
      uVar6 = uStack_2c;
      uVar3 = uStack_30;
      if (0 < iStack_28) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02758878 + 0x275863c));
        func_0x028ba1c4(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar4 + 8) = uVar3;
        if (0x7ffffffe < uVar6) {
          uVar6 = 0x7fffffff;
        }
        *(uint *)(iVar4 + 0xc) = uVar6;
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *param_2;
        uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0275887c + 0x2758684)) {
              puVar2 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xe8);
              goto LAB_027586cc;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0275887c + 0x2758684),5);
LAB_027586cc:
        (*(code *)*puVar2)(param_2,iVar1,iVar4,puVar2[1]);
      }
      goto LAB_02758504;
    }
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02758880 + 0x2758704)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_0275874c;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02758880 + 0x2758704),0);
LAB_0275874c:
      (*(code *)*puVar2)(piVar7,puVar2[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4ce2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityScoreMic$$.cctor RVA 0x2748888 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02758888(void)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02758908 + 0x2758898);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0275890c + 0x27588ac));
    func_0x01384978(*(undefined4 *)(_UNK_02758910 + 0x27588b8));
    func_0x01384978(*(undefined4 *)(_UNK_02758914 + 0x27588c4));
    *pcVar2 = '\x01';
  }
  piVar1 = *(int **)(_UNK_02758918 + 0x27588d8);
  **(undefined4 **)(*piVar1 + 0x5c) = **(undefined4 **)(_UNK_0275891c + 0x27588e8);
  *(undefined4 *)(*(int *)(*piVar1 + 0x5c) + 4) = **(undefined4 **)(_UNK_02758920 + 0x2758900);
  return;
}



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_get_Valid RVA 0x2748924 =====

void FUN_02758924(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_SetupFresh RVA 0x274892c =====

void FUN_0275892c(undefined4 param_1)

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



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_WhenActive RVA 0x2748934 =====

void FUN_02758934(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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
  func_0x01485228(&uStack_38,param_2,0);
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



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_WhenReset RVA 0x274893c =====

void FUN_0275893c(undefined4 param_1)

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



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_WhenEnd RVA 0x2748944 =====

void FUN_02758944(undefined4 param_1)

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



// ===== FAT.ActivityScoreMic$$<>iFixBaseProxy_get_Visual RVA 0x274894c =====

undefined4 FUN_0275894c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityScoreMic.<>c$$.cctor RVA 0x2748954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02758954(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_027589ac + 0x2758964);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_027589b0 + 0x2758978));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_027589b4 + 0x275898c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityScoreMic.<>c$$.ctor RVA 0x27489b8 =====

void FUN_027589b8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityScoreMic.<>c$$<WhenEnd>b__14_0 RVA 0x27489c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027589c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02758a4c + 0x27589d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02758a50 + 0x27589ec));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  if ((param_2 != 0) &&
     (iVar2 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_02758a54 + 0x2758a18)),
     iVar1 = iStack_14, iVar2 != 0)) {
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cdf0(iVar1,0);
  }
  return;
}


