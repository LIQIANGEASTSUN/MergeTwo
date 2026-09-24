
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c7d9c(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_031c7e9c + 0x31c7db0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c7ea0 + 0x31c7dc4));
    func_0x01438628(*(undefined4 *)(_UNK_031c7ea4 + 0x31c7dd0));
    func_0x01438628(*(undefined4 *)(_UNK_031c7ea8 + 0x31c7ddc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_031c7eac + 0x31c7df0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c7eb0 + 0x31c7e0c));
  uVar2 = FUN_031bf7f4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_031c7eb4 + 0x31c7e70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_031b59e4();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_031df520 + 0x31df1e8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031df524 + 0x31df1fc),0);
      func_0x01438628(*(undefined4 *)(_UNK_031df528 + 0x31df208));
      func_0x01438628(*(undefined4 *)(_UNK_031df52c + 0x31df214));
      func_0x01438628(*(undefined4 *)(_UNK_031df530 + 0x31df220));
      func_0x01438628(*(undefined4 *)(_UNK_031df534 + 0x31df22c));
      func_0x01438628(*(undefined4 *)(_UNK_031df538 + 0x31df238));
      func_0x01438628(*(undefined4 *)(_UNK_031df53c + 0x31df244));
      func_0x01438628(*(undefined4 *)(_UNK_031df540 + 0x31df250));
      func_0x01438628(*(undefined4 *)(_UNK_031df544 + 0x31df25c));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x7cf2,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_031df548 + 0x31df2e0)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_031df54c + 0x31df310));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_031df550 + 0x31df33c);
        piVar7 = *(int **)(_UNK_031df554 + 0x31df344);
        piVar8 = *(int **)(_UNK_031df558 + 0x31df34c);
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
              iVar3 = FUN_031b08c8(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_031bfa1c(iVar3,uVar2,0);
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
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_031df560 + 0x31df460));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x7cf2,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

