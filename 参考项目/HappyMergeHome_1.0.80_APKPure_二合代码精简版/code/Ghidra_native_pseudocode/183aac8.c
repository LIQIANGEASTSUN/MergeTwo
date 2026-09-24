
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184aac8(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0184abc8 + 0x184aadc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0184abcc + 0x184aaf0));
    func_0x01438628(*(undefined4 *)(_UNK_0184abd0 + 0x184aafc));
    func_0x01438628(*(undefined4 *)(_UNK_0184abd4 + 0x184ab08));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0184abd8 + 0x184ab1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184abdc + 0x184ab38));
  uVar2 = FUN_018424bc(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_0184abe0 + 0x184ab9c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018386ac();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_01862284 + 0x1861f4c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01862288 + 0x1861f60),0);
      func_0x01438628(*(undefined4 *)(_UNK_0186228c + 0x1861f6c));
      func_0x01438628(*(undefined4 *)(_UNK_01862290 + 0x1861f78));
      func_0x01438628(*(undefined4 *)(_UNK_01862294 + 0x1861f84));
      func_0x01438628(*(undefined4 *)(_UNK_01862298 + 0x1861f90));
      func_0x01438628(*(undefined4 *)(_UNK_0186229c + 0x1861f9c));
      func_0x01438628(*(undefined4 *)(_UNK_018622a0 + 0x1861fa8));
      func_0x01438628(*(undefined4 *)(_UNK_018622a4 + 0x1861fb4));
      func_0x01438628(*(undefined4 *)(_UNK_018622a8 + 0x1861fc0));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x9221,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x014e96b8(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_018622ac + 0x1862044)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05dc(&uStack_58,iVar1,**(undefined4 **)(_UNK_018622b0 + 0x1862074));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_018622b4 + 0x18620a0);
        piVar7 = *(int **)(_UNK_018622b8 + 0x18620a8);
        piVar8 = *(int **)(_UNK_018622bc + 0x18620b0);
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
              iVar3 = FUN_01833590(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_018426e4(iVar3,uVar2,0);
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
        func_0x024f05ec(&uStack_40,**(undefined4 **)(_UNK_018622c4 + 0x18621c4));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x9221,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

