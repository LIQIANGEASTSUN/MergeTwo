
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0165344c(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0165354c + 0x1653460);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01653550 + 0x1653474));
    func_0x01438628(*(undefined4 *)(_UNK_01653554 + 0x1653480));
    func_0x01438628(*(undefined4 *)(_UNK_01653558 + 0x165348c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0165355c + 0x16534a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01653560 + 0x16534bc));
  uVar2 = FUN_0164a36c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_01653564 + 0x1653520) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01640370();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_0166b584 + 0x166b24c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0166b588 + 0x166b260),0);
      func_0x01438628(*(undefined4 *)(_UNK_0166b58c + 0x166b26c));
      func_0x01438628(*(undefined4 *)(_UNK_0166b590 + 0x166b278));
      func_0x01438628(*(undefined4 *)(_UNK_0166b594 + 0x166b284));
      func_0x01438628(*(undefined4 *)(_UNK_0166b598 + 0x166b290));
      func_0x01438628(*(undefined4 *)(_UNK_0166b59c + 0x166b29c));
      func_0x01438628(*(undefined4 *)(_UNK_0166b5a0 + 0x166b2a8));
      func_0x01438628(*(undefined4 *)(_UNK_0166b5a4 + 0x166b2b4));
      func_0x01438628(*(undefined4 *)(_UNK_0166b5a8 + 0x166b2c0));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x85f7,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x014e96b8(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_0166b5ac + 0x166b344)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05dc(&uStack_58,iVar1,**(undefined4 **)(_UNK_0166b5b0 + 0x166b374));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_0166b5b4 + 0x166b3a0);
        piVar7 = *(int **)(_UNK_0166b5b8 + 0x166b3a8);
        piVar8 = *(int **)(_UNK_0166b5bc + 0x166b3b0);
        while (iVar1 = func_0x015147bc(&uStack_40,*puVar6), uVar2 = uStack_34, iVar1 != 0) {
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
              iVar3 = FUN_0163b7ec(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_0164a594(iVar3,uVar2,0);
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
        func_0x024f05ec(&uStack_40,**(undefined4 **)(_UNK_0166b5c4 + 0x166b4c4));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x85f7,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

