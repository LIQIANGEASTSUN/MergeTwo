
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030544b8(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_030545b8 + 0x30544cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030545bc + 0x30544e0));
    func_0x01438628(*(undefined4 *)(_UNK_030545c0 + 0x30544ec));
    func_0x01438628(*(undefined4 *)(_UNK_030545c4 + 0x30544f8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_030545c8 + 0x305450c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030545cc + 0x3054528));
  uVar2 = FUN_0304bd88(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_030545d0 + 0x305458c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03041d88();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_0306cbf8 + 0x306c8c0);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0306cbfc + 0x306c8d4),0);
      func_0x01438628(*(undefined4 *)(_UNK_0306cc00 + 0x306c8e0));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc04 + 0x306c8ec));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc08 + 0x306c8f8));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc0c + 0x306c904));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc10 + 0x306c910));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc14 + 0x306c91c));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc18 + 0x306c928));
      func_0x01438628(*(undefined4 *)(_UNK_0306cc1c + 0x306c934));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x73f1,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_0306cc20 + 0x306c9b8)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_0306cc24 + 0x306c9e8));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_0306cc28 + 0x306ca14);
        piVar7 = *(int **)(_UNK_0306cc2c + 0x306ca1c);
        piVar8 = *(int **)(_UNK_0306cc30 + 0x306ca24);
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
              iVar3 = FUN_0303cc6c(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_0304bfb0(iVar3,uVar2,0);
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
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_0306cc38 + 0x306cb38));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x73f1,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

