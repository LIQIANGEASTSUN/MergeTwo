
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031ea65c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_031eaaf8 + 0x31ea678);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031eaafc + 0x31ea68c));
    func_0x01438628(*(undefined4 *)(_UNK_031eab00 + 0x31ea698));
    func_0x01438628(*(undefined4 *)(_UNK_031eab04 + 0x31ea6a4));
    func_0x01438628(*(undefined4 *)(_UNK_031eab08 + 0x31ea6b0));
    func_0x01438628(*(undefined4 *)(_UNK_031eab0c + 0x31ea6bc));
    func_0x01438628(*(undefined4 *)(_UNK_031eab10 + 0x31ea6c8));
    func_0x01438628(*(undefined4 *)(_UNK_031eab14 + 0x31ea6d4));
    func_0x01438628(*(undefined4 *)(_UNK_031eab18 + 0x31ea6e0));
    func_0x01438628(*(undefined4 *)(_UNK_031eab1c + 0x31ea6ec));
    func_0x01438628(*(undefined4 *)(_UNK_031eab20 + 0x31ea6f8));
    func_0x01438628(*(undefined4 *)(_UNK_031eab24 + 0x31ea704));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x331e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_031e6094(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(param_2 + 0xc);
    uVar2 = 0;
    if (iVar5 <= iVar1) {
      uStack_24 = *(undefined4 *)(param_2 + 0x18);
      uVar2 = func_0x0515c4b0(&uStack_24,0);
      uVar2 = func_0x04f5b548(**(undefined4 **)(_UNK_031eab28 + 0x31ea7b4),uVar2,0);
      FUN_031e82e0(param_1,-iVar5,uVar2);
      if (*(int *)(**(int **)(_UNK_031eab2c + 0x31ea7d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x0202346c(0);
      uStack_24 = *(undefined4 *)(param_2 + 8);
      uVar2 = func_0x0515c4b0(&uStack_24,0);
      uStack_24 = *(undefined4 *)(param_2 + 8);
      uVar3 = func_0x0515c4b0(&uStack_24,0);
      iVar5 = FUN_031e6094(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_24 = *(undefined4 *)(iVar5 + 0x40);
      uVar4 = func_0x0515c4b0(&uStack_24,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = 0;
      func_0x020257a4(iVar1,0x254,uVar2,uVar3,uVar4,0,0);
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      if (*(int *)(**(int **)(_UNK_031eab30 + 0x31ea8a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar2 = func_0x02af43a8(uVar2,uVar3,0);
      iVar1 = **(int **)(**(int **)(_UNK_031eab34 + 0x31ea8e0) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02e66ffc(iVar1,uVar2,0x86,0,0,0,0,0,0,0,1,0,uVar7);
      iVar1 = FUN_031e6094(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar1,uVar2,**(undefined4 **)(_UNK_031eab38 + 0x31ea968));
      iVar1 = func_0x019b4c90(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019bfa8c(iVar1,0xb,1,0);
      iVar1 = func_0x0199d2c4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019a66a4(iVar1,0xb,1,0);
      iVar1 = func_0x019ac0bc(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019b2c40(iVar1,0xb,1,0);
      if (*(int *)(**(int **)(_UNK_031eab3c + 0x31eaa00) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031eab40 + 0x31eaa1c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024356c8(iVar1,0xb,1,0);
      iVar1 = FUN_031e9ea8(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_031e6094(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b16ec(iVar1,1,0);
      }
      if (*(int *)(**(int **)(_UNK_031eab44 + 0x31eaa88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031eab48 + 0x31eaaa4));
      uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031eab4c + 0x31eaab8));
      func_0x031eab54(uVar2,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0362b094(iVar1,uVar2,**(undefined4 **)(_UNK_031eab50 + 0x31eaae4));
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x331e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286b7bc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

