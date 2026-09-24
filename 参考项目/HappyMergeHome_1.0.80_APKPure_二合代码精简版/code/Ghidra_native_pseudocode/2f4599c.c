
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f5599c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02f55a9c + 0x2f559b0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f55aa0 + 0x2f559c4));
    func_0x01438628(*(undefined4 *)(_UNK_02f55aa4 + 0x2f559d0));
    func_0x01438628(*(undefined4 *)(_UNK_02f55aa8 + 0x2f559dc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02f55aac + 0x2f559f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f55ab0 + 0x2f55a0c));
  uVar2 = FUN_02f4c8bc(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_02f55ab4 + 0x2f55a70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f428bc();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_02f6d9cc + 0x2f6d694);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9d0 + 0x2f6d6a8),0);
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9d4 + 0x2f6d6b4));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9d8 + 0x2f6d6c0));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9dc + 0x2f6d6cc));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9e0 + 0x2f6d6d8));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9e4 + 0x2f6d6e4));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9e8 + 0x2f6d6f0));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9ec + 0x2f6d6fc));
      func_0x01438628(*(undefined4 *)(_UNK_02f6d9f0 + 0x2f6d708));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x6ddf,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_02f6d9f4 + 0x2f6d78c)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_02f6d9f8 + 0x2f6d7bc));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_02f6d9fc + 0x2f6d7e8);
        piVar7 = *(int **)(_UNK_02f6da00 + 0x2f6d7f0);
        piVar8 = *(int **)(_UNK_02f6da04 + 0x2f6d7f8);
        while (iVar1 = func_0x048a60cc(&uStack_40,*puVar6), uVar2 = uStack_34, iVar1 != 0) {
          iVar1 = (int)uStack_30;
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024eec50(iVar1,0,0);
          if (iVar3 == 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x014e94d8(iVar1,0);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024eec50(uVar4,0,0);
            if (iVar3 == 0) {
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = FUN_02f3dd38(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_02f4cae4(iVar3,uVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,uVar2,0);
            }
          }
        }
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_02f6da0c + 0x2f6d90c));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x6ddf,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

