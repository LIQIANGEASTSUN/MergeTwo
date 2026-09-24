
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe0980(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_02fe0a80 + 0x2fe0994);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe0a84 + 0x2fe09a8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0a88 + 0x2fe09b4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe0a8c + 0x2fe09c0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02fe0a90 + 0x2fe09d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe0a94 + 0x2fe09f0));
  uVar2 = FUN_02fd78a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_02fe0a98 + 0x2fe0a54) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02fcd8a4();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_02ff8ab8 + 0x2ff8780);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02ff8abc + 0x2ff8794),0);
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ac0 + 0x2ff87a0));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ac4 + 0x2ff87ac));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ac8 + 0x2ff87b8));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8acc + 0x2ff87c4));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ad0 + 0x2ff87d0));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ad4 + 0x2ff87dc));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8ad8 + 0x2ff87e8));
      func_0x01438628(*(undefined4 *)(_UNK_02ff8adc + 0x2ff87f4));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x70e1,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_02ff8ae0 + 0x2ff8878)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_02ff8ae4 + 0x2ff88a8));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_02ff8ae8 + 0x2ff88d4);
        piVar7 = *(int **)(_UNK_02ff8aec + 0x2ff88dc);
        piVar8 = *(int **)(_UNK_02ff8af0 + 0x2ff88e4);
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
              iVar3 = FUN_02fc8d20(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_02fd7ac8(iVar3,uVar2,0);
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
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_02ff8af8 + 0x2ff89f8));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x70e1,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

