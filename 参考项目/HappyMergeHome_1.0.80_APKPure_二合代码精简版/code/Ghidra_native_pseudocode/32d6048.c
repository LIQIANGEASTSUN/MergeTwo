
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e6048(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_032e6148 + 0x32e605c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e614c + 0x32e6070));
    func_0x01438628(*(undefined4 *)(_UNK_032e6150 + 0x32e607c));
    func_0x01438628(*(undefined4 *)(_UNK_032e6154 + 0x32e6088));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032e6158 + 0x32e609c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e615c + 0x32e60b8));
  uVar2 = FUN_032dc790(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_032e6160 + 0x32e611c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032d3310();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_032fde94 + 0x32fdb5c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032fde98 + 0x32fdb70),0);
      func_0x01438628(*(undefined4 *)(_UNK_032fde9c + 0x32fdb7c));
      func_0x01438628(*(undefined4 *)(_UNK_032fdea0 + 0x32fdb88));
      func_0x01438628(*(undefined4 *)(_UNK_032fdea4 + 0x32fdb94));
      func_0x01438628(*(undefined4 *)(_UNK_032fdea8 + 0x32fdba0));
      func_0x01438628(*(undefined4 *)(_UNK_032fdeac + 0x32fdbac));
      func_0x01438628(*(undefined4 *)(_UNK_032fdeb0 + 0x32fdbb8));
      func_0x01438628(*(undefined4 *)(_UNK_032fdeb4 + 0x32fdbc4));
      func_0x01438628(*(undefined4 *)(_UNK_032fdeb8 + 0x32fdbd0));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x8393,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_032fdebc + 0x32fdc54)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_032fdec0 + 0x32fdc84));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_032fdec4 + 0x32fdcb0);
        piVar7 = *(int **)(_UNK_032fdec8 + 0x32fdcb8);
        piVar8 = *(int **)(_UNK_032fdecc + 0x32fdcc0);
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
              iVar3 = FUN_032d2dac(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_032dc9b8(iVar3,uVar2,0);
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
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_032fded4 + 0x32fddd4));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x8393,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

