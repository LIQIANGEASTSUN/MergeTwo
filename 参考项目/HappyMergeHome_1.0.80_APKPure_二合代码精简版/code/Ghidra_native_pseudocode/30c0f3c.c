
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030d0f3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_030d13d0 + 0x30d0f60);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d13d4 + 0x30d0f74));
    func_0x01438628(*(undefined4 *)(_UNK_030d13d8 + 0x30d0f80));
    func_0x01438628(*(undefined4 *)(_UNK_030d13dc + 0x30d0f8c));
    func_0x01438628(*(undefined4 *)(_UNK_030d13e0 + 0x30d0f98));
    func_0x01438628(*(undefined4 *)(_UNK_030d13e4 + 0x30d0fa4));
    func_0x01438628(*(undefined4 *)(_UNK_030d13e8 + 0x30d0fb0));
    func_0x01438628(*(undefined4 *)(_UNK_030d13ec + 0x30d0fbc));
    func_0x01438628(*(undefined4 *)(_UNK_030d13f0 + 0x30d0fc8));
    func_0x01438628(*(undefined4 *)(_UNK_030d13f4 + 0x30d0fd4));
    func_0x01438628(*(undefined4 *)(_UNK_030d13f8 + 0x30d0fe0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x76dd,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030d13fc + 0x30d1050) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_030ccbc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x030d142c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_030d1400 + 0x30d10b4);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_030d1404 + 0x30d10c8));
        if (*(int *)(**(int **)(_UNK_030d1408 + 0x30d10e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030d140c + 0x30d1100));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_030d1410 + 0x30d11cc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_030ccbc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x030d1840(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_030d1414 + 0x30d121c));
          iVar3 = FUN_030ccbc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x030d18ac();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030e9dec(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_030d1418 + 0x30d1148) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d141c + 0x30d1164));
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
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x2fb,uVar2,**(undefined4 **)(_UNK_030d1420 + 0x30d12d0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_030d1424 + 0x30d1308) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_030d1428 + 0x30d1364));
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
    iVar1 = func_0x029540a4(0x76dd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

