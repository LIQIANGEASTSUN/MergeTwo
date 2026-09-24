
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030550b4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03055328 + 0x30550cc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0305532c + 0x30550e0));
    func_0x01438628(*(undefined4 *)(_UNK_03055330 + 0x30550ec));
    func_0x01438628(*(undefined4 *)(_UNK_03055334 + 0x30550f8));
    func_0x01438628(*(undefined4 *)(_UNK_03055338 + 0x3055104));
    func_0x01438628(*(undefined4 *)(_UNK_0305533c + 0x3055110));
    func_0x01438628(*(undefined4 *)(_UNK_03055340 + 0x305511c));
    func_0x01438628(*(undefined4 *)(_UNK_03055344 + 0x3055128));
    *pcVar3 = '\x01';
  }
  iVar7 = 0;
  puVar9 = *(undefined4 **)(_UNK_03055348 + 0x3055144);
  while( true ) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar7) break;
    iVar8 = *(int *)(param_1 + 8);
    iVar4 = **(int **)(**(int **)(_UNK_0305534c + 0x3055168) + 0x5c);
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
        if (*(int *)(**(int **)(_UNK_03055350 + 0x305521c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x0202346c(0);
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03055354 + 0x3055244));
        func_0x02025440(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar1 + 0x25) = 0;
        *(undefined4 *)(iVar1 + 8) = 0x77;
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
  if (*(int *)(**(int **)(_UNK_03055358 + 0x30552d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = FUN_03041d88(0);
  if (iVar7 != 0) {
    func_0x03055360();
  }
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x03bbd2d4(iVar7,1,*(undefined4 *)
                                   (*(int *)(*(int *)(**(int **)(_UNK_0305535c + 0x3055318) + 0x10)
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

