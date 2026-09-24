/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.EatGroup$$Parse RVA 0x2119568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02129568(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_021296e0 + 0x2129588);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021296e4 + 0x212959c));
    func_0x01384978(*(undefined4 *)(_UNK_021296e8 + 0x21295a8));
    func_0x01384978(*(undefined4 *)(_UNK_021296ec + 0x21295b4));
    func_0x01384978(*(undefined4 *)(_UNK_021296f0 + 0x21295c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3c1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021296f4 + 0x212963c));
    uVar2 = 0;
    if (-1 < param_3) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (param_3 < *(int *)(iVar1 + 0xc)) {
        iVar1 = *(int *)(param_2 + 0x1c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x03653d1c(iVar1,param_3,**(undefined4 **)(_UNK_021296f8 + 0x2129698));
        uVar2 = 1;
        uVar4 = func_0x03003b84(*(undefined4 *)(param_2 + 0x14),param_3,1,
                                **(undefined4 **)(_UNK_021296fc + 0x21296bc));
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        func_0x02129700(uVar3,*(undefined4 *)(param_1 + 8));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3c1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021e20b4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.EatGroup$$_ParseEatItem RVA 0x2119700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02129700(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_021298a0 + 0x212971c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021298a4 + 0x2129730));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x0229f06c(0xb3c2,0);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    iVar3 = func_0x0244f8e4(param_1,0x3b,0,0);
    while( true ) {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar7) break;
      if (*(uint *)(iVar3 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      iVar6 = *(int *)(iVar3 + 0x10 + uVar7 * 4);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0244f8e4(iVar6,0x3a,0,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar6 + 0xc) == 2) &&
         (iVar4 = func_0x0245085c(*(undefined4 *)(iVar6 + 0x10),&uStack_28,0), iVar4 != 0)) {
        if (*(uint *)(iVar6 + 0xc) < 2) {
          func_0x01384bf4();
        }
        iVar6 = func_0x0245085c(*(undefined4 *)(iVar6 + 0x14),&uStack_2c,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        if (iVar6 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(param_2,uVar2,uVar1,**(undefined4 **)(_UNK_021298a8 + 0x2129890));
        }
      }
      uVar7 = uVar7 + 1;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xb3c2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.EatGroup$$.ctor RVA 0x21198ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021298ac(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02129924 + 0x21298c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02129928 + 0x21298d4));
    func_0x01384978(*(undefined4 *)(_UNK_0212992c + 0x21298e0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02129930 + 0x21298f4));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02129934 + 0x2129908));
  *(undefined4 *)(param_1 + 8) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}


