
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03090ca4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_03090f18 + 0x3090cbc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03090f1c + 0x3090cd0));
    func_0x01438628(*(undefined4 *)(_UNK_03090f20 + 0x3090cdc));
    func_0x01438628(*(undefined4 *)(_UNK_03090f24 + 0x3090ce8));
    func_0x01438628(*(undefined4 *)(_UNK_03090f28 + 0x3090cf4));
    func_0x01438628(*(undefined4 *)(_UNK_03090f2c + 0x3090d00));
    func_0x01438628(*(undefined4 *)(_UNK_03090f30 + 0x3090d0c));
    func_0x01438628(*(undefined4 *)(_UNK_03090f34 + 0x3090d18));
    *pcVar3 = '\x01';
  }
  iVar7 = 0;
  puVar9 = *(undefined4 **)(_UNK_03090f38 + 0x3090d34);
  while( true ) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar7) break;
    iVar8 = *(int *)(param_1 + 8);
    iVar4 = **(int **)(**(int **)(_UNK_03090f3c + 0x3090d58) + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x04cfd760(iVar8,iVar7,*puVar9);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar8 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02e651cc(iVar4,uVar5,0);
    if (iVar4 == 0) {
      iVar4 = 0;
      while( true ) {
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x04cfd760(iVar8,iVar7,*puVar9);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar4) break;
        if (*(int *)(**(int **)(_UNK_03090f40 + 0x3090e0c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x0202346c(0);
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03090f44 + 0x3090e34));
        func_0x02025440(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar1 + 0x25) = 0;
        *(undefined4 *)(iVar1 + 8) = 0x79;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x04cfd760(iVar6,iVar7,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar6 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x02024d08(iVar8,iVar1,1,0);
        iVar4 = iVar4 + 1;
      }
    }
    iVar7 = iVar7 + 1;
  }
  if (*(int *)(**(int **)(_UNK_03090f48 + 0x3090ec8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = FUN_0307cfc8(0);
  if (iVar7 != 0) {
    func_0x03090f50();
  }
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x03bbd2d4(iVar7,1,*(undefined4 *)
                                   (*(int *)(*(int *)(**(int **)(_UNK_03090f4c + 0x3090f08) + 0x10)
                                            + 0x60) + 0x24));
  if (iVar7 != 0) {
    return;
  }
  uVar5 = func_0x05186e84(0x2e,0);
  uVar5 = func_0x051b0d0c(uVar5,0);
  func_0x034a8b60(*(undefined4 *)(_UNK_05187528 + 0x51874f8));
  uVar2 = func_0x034a8aa8();
  func_0x0515f4f8(uVar2,uVar5,0);
  uVar5 = func_0x034a8b60(*(undefined4 *)(_UNK_0518752c + 0x5187518));
  func_0x034a8b80(uVar2,uVar5);
  func_0x034a8b90();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

