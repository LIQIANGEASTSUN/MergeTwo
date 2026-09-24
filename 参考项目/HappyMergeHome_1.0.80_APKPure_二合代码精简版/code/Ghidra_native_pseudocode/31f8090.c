
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03208090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_03208524 + 0x32080b4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03208528 + 0x32080c8));
    func_0x01438628(*(undefined4 *)(_UNK_0320852c + 0x32080d4));
    func_0x01438628(*(undefined4 *)(_UNK_03208530 + 0x32080e0));
    func_0x01438628(*(undefined4 *)(_UNK_03208534 + 0x32080ec));
    func_0x01438628(*(undefined4 *)(_UNK_03208538 + 0x32080f8));
    func_0x01438628(*(undefined4 *)(_UNK_0320853c + 0x3208104));
    func_0x01438628(*(undefined4 *)(_UNK_03208540 + 0x3208110));
    func_0x01438628(*(undefined4 *)(_UNK_03208544 + 0x320811c));
    func_0x01438628(*(undefined4 *)(_UNK_03208548 + 0x3208128));
    func_0x01438628(*(undefined4 *)(_UNK_0320854c + 0x3208134));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7e49,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03208550 + 0x32081a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03204330();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03208580(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_03208554 + 0x3208208);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03208558 + 0x320821c));
        if (*(int *)(**(int **)(_UNK_0320855c + 0x3208234) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03208560 + 0x3208254));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03208564 + 0x3208320) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03204330();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03208994(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03208568 + 0x3208370));
          iVar3 = FUN_03204330();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x03208a00();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0321dcec(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0320856c + 0x320829c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03208570 + 0x32082b8));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x27c,uVar2,**(undefined4 **)(_UNK_03208574 + 0x3208424),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03208578 + 0x320845c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0320857c + 0x32084b8));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7e49,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

