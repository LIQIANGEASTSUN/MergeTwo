
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c8998(int param_1)

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
  
  pcVar3 = (char *)(_UNK_031c8c0c + 0x31c89b0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c8c10 + 0x31c89c4));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c14 + 0x31c89d0));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c18 + 0x31c89dc));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c1c + 0x31c89e8));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c20 + 0x31c89f4));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c24 + 0x31c8a00));
    func_0x01438628(*(undefined4 *)(_UNK_031c8c28 + 0x31c8a0c));
    *pcVar3 = '\x01';
  }
  iVar7 = 0;
  puVar9 = *(undefined4 **)(_UNK_031c8c2c + 0x31c8a28);
  while( true ) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar7) break;
    iVar8 = *(int *)(param_1 + 8);
    iVar4 = **(int **)(**(int **)(_UNK_031c8c30 + 0x31c8a4c) + 0x5c);
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
    iVar4 = func_0x02e651cc(iVar4,uVar5,0);
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
        if (*(int *)(**(int **)(_UNK_031c8c34 + 0x31c8b00) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x0202346c(0);
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031c8c38 + 0x31c8b28));
        func_0x02025440(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar1 + 0x25) = 0;
        *(undefined4 *)(iVar1 + 8) = 0x6b;
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
  if (*(int *)(**(int **)(_UNK_031c8c3c + 0x31c8bbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = FUN_031b59e4(0);
  if (iVar7 != 0) {
    func_0x031c8c44();
  }
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x03bbd2d4(iVar7,1,*(undefined4 *)
                                   (*(int *)(*(int *)(**(int **)(_UNK_031c8c40 + 0x31c8bfc) + 0x10)
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

