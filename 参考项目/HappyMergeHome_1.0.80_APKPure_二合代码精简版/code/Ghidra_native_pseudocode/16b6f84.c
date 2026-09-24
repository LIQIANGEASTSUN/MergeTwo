
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c6f84(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_016c7084 + 0x16c6f98);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c7088 + 0x16c6fac));
    func_0x01438628(*(undefined4 *)(_UNK_016c708c + 0x16c6fb8));
    func_0x01438628(*(undefined4 *)(_UNK_016c7090 + 0x16c6fc4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_016c7094 + 0x16c6fd8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c7098 + 0x16c6ff4));
  uVar2 = func_0x016be854(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_016c709c + 0x16c7058) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x016b4854();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_016def60 + 0x16dec28);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_016def64 + 0x16dec3c),0);
      func_0x01438628(*(undefined4 *)(_UNK_016def68 + 0x16dec48));
      func_0x01438628(*(undefined4 *)(_UNK_016def6c + 0x16dec54));
      func_0x01438628(*(undefined4 *)(_UNK_016def70 + 0x16dec60));
      func_0x01438628(*(undefined4 *)(_UNK_016def74 + 0x16dec6c));
      func_0x01438628(*(undefined4 *)(_UNK_016def78 + 0x16dec78));
      func_0x01438628(*(undefined4 *)(_UNK_016def7c + 0x16dec84));
      func_0x01438628(*(undefined4 *)(_UNK_016def80 + 0x16dec90));
      func_0x01438628(*(undefined4 *)(_UNK_016def84 + 0x16dec9c));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x88fb,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x014e96b8(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_016def88 + 0x16ded20)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05dc(&uStack_58,iVar1,**(undefined4 **)(_UNK_016def8c + 0x16ded50));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_016def90 + 0x16ded7c);
        piVar7 = *(int **)(_UNK_016def94 + 0x16ded84);
        piVar8 = *(int **)(_UNK_016def98 + 0x16ded8c);
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
              iVar3 = func_0x016af738(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = func_0x016bea7c(iVar3,uVar2,0);
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
        func_0x024f05ec(&uStack_40,**(undefined4 **)(_UNK_016defa0 + 0x16deea0));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x88fb,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

