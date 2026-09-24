
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01970df8(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_01970ef8 + 0x1970e0c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01970efc + 0x1970e20));
    func_0x01438628(*(undefined4 *)(_UNK_01970f00 + 0x1970e2c));
    func_0x01438628(*(undefined4 *)(_UNK_01970f04 + 0x1970e38));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01970f08 + 0x1970e4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01970f0c + 0x1970e68));
  uVar2 = FUN_01967d18(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_01970f10 + 0x1970ecc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0195dd1c();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_01988f30 + 0x1988bf8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01988f34 + 0x1988c0c),0);
      func_0x01438628(*(undefined4 *)(_UNK_01988f38 + 0x1988c18));
      func_0x01438628(*(undefined4 *)(_UNK_01988f3c + 0x1988c24));
      func_0x01438628(*(undefined4 *)(_UNK_01988f40 + 0x1988c30));
      func_0x01438628(*(undefined4 *)(_UNK_01988f44 + 0x1988c3c));
      func_0x01438628(*(undefined4 *)(_UNK_01988f48 + 0x1988c48));
      func_0x01438628(*(undefined4 *)(_UNK_01988f4c + 0x1988c54));
      func_0x01438628(*(undefined4 *)(_UNK_01988f50 + 0x1988c60));
      func_0x01438628(*(undefined4 *)(_UNK_01988f54 + 0x1988c6c));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x98fc,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x014e96b8(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_01988f58 + 0x1988cf0)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05dc(&uStack_58,iVar1,**(undefined4 **)(_UNK_01988f5c + 0x1988d20));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_01988f60 + 0x1988d4c);
        piVar7 = *(int **)(_UNK_01988f64 + 0x1988d54);
        piVar8 = *(int **)(_UNK_01988f68 + 0x1988d5c);
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
              iVar3 = FUN_01959198(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_01967f40(iVar3,uVar2,0);
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
        func_0x024f05ec(&uStack_40,**(undefined4 **)(_UNK_01988f70 + 0x1988e70));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x98fc,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

