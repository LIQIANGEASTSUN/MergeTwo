/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardRes$$Install RVA 0x1ef46e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f046e8(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01f04950 + 0x1f0470c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f04954 + 0x1f04720));
    func_0x01384978(*(undefined4 *)(_UNK_01f04958 + 0x1f0472c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ea4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ea4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_01f0495c + 0x1f04794);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar9;
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x58) = uVar8;
  *(undefined2 *)(iVar2 + 0x5c) = uVar1;
  FUN_01ddb310(uVar4,0);
  FUN_01ddb400(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_01ddb4f0(*(undefined4 *)(param_1 + 0x20),0);
  FUN_01ddb5e0(*(undefined4 *)(param_1 + 0x24),0);
  FUN_01ddaad8(param_1,0);
  uVar7 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) <= (int)uVar7) break;
    if ((uVar7 < 0x17) && ((1 << (uVar7 & 0xff) & 0x4021c0U) != 0)) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar8 = FUN_01dda730(uVar7,0);
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01f04960 + 0x1f04864));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244aa9c(iVar2,uVar8,0);
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_3c = FUN_01dda730(uVar7,0);
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01f04964 + 0x1f048b8));
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar7) {
      func_0x01384bf4();
    }
    uVar10 = *(undefined4 *)(iVar6 + uVar7 * 4 + 0x10);
    func_0x024487c8(&uStack_38,0);
    uVar4 = uStack_34;
    uVar8 = uStack_38;
    uVar3 = func_0x01f04968(uVar7);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = uVar4;
    uStack_40 = 0;
    uStack_44 = uVar3;
    func_0x0244a908(iVar2,uStack_3c,uVar10,uVar8);
    uVar7 = uVar7 + 1;
  }
  return;
}



// ===== FAT.BoardRes$$ProfileOfItemEffectType RVA 0x1ef4968 =====

/* WARNING: Possible PIC construction at 0x01f04a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f04a90) */
/* WARNING: Removing unreachable block (ram,0x01f04a9c) */
/* WARNING: Removing unreachable block (ram,0x01f04aa0) */
/* WARNING: Removing unreachable block (ram,0x02555368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f04968(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int *piVar8;
  undefined4 unaff_r10;
  undefined *unaff_lr;
  undefined4 *puVar9;
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
  
  iVar2 = func_0x0229f06c(0x5eaf,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5eaf,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0223857c + 0x223849c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238580 + 0x22384b0),param_1,0);
      *pcVar6 = '\x01';
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
    func_0x01485238(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02238584 + 0x223856c));
    return iVar2;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 9:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x17:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x23:
    param_1 = unaff_r4;
    break;
  case 3:
  case 4:
  case 5:
    unaff_lr = &UNK_01f04a90;
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    break;
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
    iVar2 = func_0x0229f06c(0xc29,0,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0xc29,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto LAB_021886d8;
    }
    iVar2 = 3;
    goto LAB_0255528c;
  default:
    iVar2 = func_0x0229f06c(0x401,0,0);
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_0255528c;
    }
    iVar2 = func_0x0229f13c(0x401,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto LAB_021886d8;
  }
  *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r5;
  puVar9 = (undefined4 *)((int)register0x00000054 + -0x10);
  *puVar9 = param_1;
  iVar2 = func_0x0229f06c(0xc28,0,0);
  if (iVar2 == 0) {
    iVar2 = 2;
    unaff_r4 = *puVar9;
    unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
    unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
    unaff_lr = *(undefined **)((int)register0x00000054 + -4);
LAB_0255528c:
    *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
    pcVar6 = (char *)(_UNK_0255559c + 0x25552ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_025555a0 + 0x25552c0));
      func_0x01384978(*(undefined4 *)(_UNK_025555a4 + 0x25552cc));
      func_0x01384978(*(undefined4 *)(_UNK_025555a8 + 0x25552d8));
      *pcVar6 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x402,0);
    if (iVar5 == 0) {
      piVar8 = *(int **)(_UNK_025555ac + 0x255533c);
      iVar5 = func_0x01384be4(*piVar8);
      func_0x0244f5a0(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar5 + 8) = iVar2;
      *(undefined1 *)(iVar5 + 0x34) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x60);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01cc02e4(iVar3,6,0);
      if (iVar3 == 0) {
        iVar2 = *piVar8;
        *(undefined4 *)(iVar5 + 0x24) = 0xbf800000;
        *(undefined4 *)(iVar5 + 0x28) = 0xbf800000;
        pcVar6 = *(char **)(iVar2 + 0x5c);
        *(undefined4 *)(iVar5 + 0x18) = 0x7fffffff;
        *(undefined4 *)(iVar5 + 0x38) = 0;
        cVar1 = *pcVar6;
        *(undefined1 *)(iVar5 + 0x20) = 0;
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 8) = 4;
        if (cVar1 == '\0') {
          piVar8 = *(int **)(_UNK_025555b0 + 0x2555480);
          *pcVar6 = '\x01';
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02450924(**(undefined4 **)(_UNK_025555b4 + 0x25554a4),0);
        }
      }
      else {
        if (iVar2 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x025553d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (*(code *)(&UNK_025553d8 + *(int *)(&UNK_025553d8 + (iVar2 - 1U) * 4)))();
          return iVar2;
        }
        *(undefined4 *)(iVar5 + 0x38) = 1;
        *(undefined1 *)(iVar5 + 0x20) = 1;
        *(undefined4 *)(iVar5 + 0x24) = 0xbf800000;
        *(undefined4 *)(iVar5 + 0x28) = 0xbf800000;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0x20;
        *(undefined4 *)(iVar5 + 0x1c) = 0x43340000;
        *(undefined4 *)(iVar5 + 8) = 0;
      }
    }
    else {
      iVar5 = func_0x0229f13c(0x402,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      iVar5 = func_0x021885a4(iVar5,iVar2,0,0);
    }
    return iVar5;
  }
  iVar2 = func_0x0229f13c(0xc28,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *puVar9;
  unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined **)((int)register0x00000054 + -4);
LAB_021886d8:
  *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar6 = (char *)(_UNK_021887ec + 0x21886f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021887f0 + 0x218870c),0,0,0);
    *pcVar6 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar5 = *(int *)(iVar2 + 0x10);
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
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar5,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  iVar2 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_021887f4 + 0x21887dc));
  return iVar2;
}



// ===== FAT.BoardRes$$.ctor RVA 0x1ef4ac4 =====

void FUN_01f04ac4(int param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x3ecccccd;
  (*(code *)&UNK_0518b82c)(param_1,0);
  return;
}



// ===== FAT.BoardRes.SpawnPopParam$$.ctor RVA 0x1ef4ae0 =====

void FUN_01f04ae0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}


