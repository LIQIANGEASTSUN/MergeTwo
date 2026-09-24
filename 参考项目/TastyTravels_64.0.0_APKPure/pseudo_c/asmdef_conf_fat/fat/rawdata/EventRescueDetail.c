/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescueDetail$$.ctor RVA 0x161fe48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162fe48(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_0162fff8 + 0x162fe5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162fffc + 0x162fe70));
    func_0x01384978(*(undefined4 *)(_UNK_01630000 + 0x162fe7c));
    func_0x01384978(*(undefined4 *)(_UNK_01630004 + 0x162fe88));
    func_0x01384978(*(undefined4 *)(_UNK_01630008 + 0x162fe94));
    func_0x01384978(*(undefined4 *)(_UNK_0163000c + 0x162fea0));
    func_0x01384978(*(undefined4 *)(_UNK_01630010 + 0x162feac));
    func_0x01384978(*(undefined4 *)(_UNK_01630014 + 0x162feb8));
    func_0x01384978(*(undefined4 *)(_UNK_01630018 + 0x162fec4));
    func_0x01384978(*(undefined4 *)(_UNK_0163001c + 0x162fed0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01630020 + 0x162fee4));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_01630024 + 0x162fef8));
  puVar6 = *(undefined4 **)(_UNK_01630028 + 0x162ff0c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0163002c + 0x162ff24);
  func_0x0244f964(iVar1,*puVar7);
  puVar2 = *(undefined4 **)(_UNK_01630030 + 0x162ff34);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_01630034 + 0x162ff4c));
  uVar3 = *puVar6;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f964(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_01630038 + 0x162ff78);
  param_1[9] = iVar1;
  uVar3 = *puVar6;
  param_1[10] = *piVar4;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f964(iVar1,*puVar7);
  uVar3 = *puVar6;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f964(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_0163003c + 0x162ffb8);
  param_1[0xd] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01630040 + 0x162ffd8));
                    /* WARNING: Could not recover jumptable at 0x0162fff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescueDetail$$.ctor RVA 0x1620044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01630044(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_016301bc + 0x163005c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016301c0 + 0x1630070));
    func_0x01384978(*(undefined4 *)(_UNK_016301c4 + 0x163007c));
    func_0x01384978(*(undefined4 *)(_UNK_016301c8 + 0x1630088));
    *pcVar3 = '\x01';
  }
  FUN_0162fe48(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,**(undefined4 **)(_UNK_016301cc + 0x16300c8));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_016301d0 + 0x16300f4);
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar4,**(undefined4 **)(_UNK_016301d4 + 0x1630120));
  iVar4 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescueDetail$$Clone RVA 0x16201d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016301d8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0163022c + 0x16301ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630230 + 0x1630200));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01630234 + 0x1630214));
  FUN_01630044(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescueDetail$$ProxyInternalMergeFrom RVA 0x1620238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01630238(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_01630594 + 0x1630254);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630598 + 0x1630268));
    func_0x01384978(*(undefined4 *)(_UNK_0163059c + 0x1630274));
    func_0x01384978(*(undefined4 *)(_UNK_016305a0 + 0x1630280));
    func_0x01384978(*(undefined4 *)(_UNK_016305a4 + 0x163028c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016305a8 + 0x16302bc);
    puVar8 = *(undefined4 **)(_UNK_016305ac + 0x16302c4);
    puVar9 = *(undefined4 **)(_UNK_016305b0 + 0x16302cc);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar1 != 0x12) {
              if (uVar1 != 0x18) goto LAB_01630424;
LAB_0163043c:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
              goto LAB_01630488;
            }
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
          }
        }
        else if (uVar1 < 0x21) {
          if (uVar1 == 0x1a) goto LAB_0163043c;
          if (uVar1 != 0x20) goto LAB_01630424;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
        else {
          if (uVar1 != 0x28) {
            if (uVar1 == 0x30) goto LAB_016303d4;
            goto LAB_01630424;
          }
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar4;
        }
      }
      else if (uVar1 < 0x41) {
        if (uVar1 < 0x39) {
          if (uVar1 != 0x32) {
            if (uVar1 == 0x38) goto LAB_01630464;
LAB_01630424:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
            goto LAB_016304a8;
          }
LAB_016303d4:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
        else {
          if (uVar1 != 0x3a) {
            if (uVar1 == 0x40) goto LAB_0163039c;
            goto LAB_01630424;
          }
LAB_01630464:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x34);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
        }
LAB_01630488:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
      }
      else if (uVar1 < 0x4b) {
        if (uVar1 == 0x42) {
LAB_0163039c:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
          goto LAB_01630488;
        }
        if (uVar1 != 0x4a) goto LAB_01630424;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x28) = uVar4;
      }
      else if (uVar1 == 0x52) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x1c);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034663ac(iVar6,param_2,uVar4,**(undefined4 **)(_UNK_016305b4 + 0x1630580));
      }
      else {
        if (uVar1 != 0x58) goto LAB_01630424;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
      }
LAB_016304a8:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescueDetail$$get_XXX_RowIdentifier RVA 0x16205b8 =====

undefined4 FUN_016305b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== fat.rawdata.EventRescueDetail$$set_XXX_RowIdentifier RVA 0x16205c0 =====

void FUN_016305c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== fat.rawdata.EventRescueDetail$$.cctor RVA 0x16205c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016305c8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0163073c + 0x16305dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630740 + 0x16305f0));
    func_0x01384978(*(undefined4 *)(_UNK_01630744 + 0x16305fc));
    func_0x01384978(*(undefined4 *)(_UNK_01630748 + 0x1630608));
    func_0x01384978(*(undefined4 *)(_UNK_0163074c + 0x1630614));
    func_0x01384978(*(undefined4 *)(_UNK_01630750 + 0x1630620));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01630754 + 0x1630634);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01630758 + 0x1630644);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_0163075c + 0x163069c),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01630760 + 0x16306b4));
  func_0x0244f944(uVar3,uVar1,uVar2,0x52,**(undefined4 **)(_UNK_01630764 + 0x16306d4));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  return;
}


