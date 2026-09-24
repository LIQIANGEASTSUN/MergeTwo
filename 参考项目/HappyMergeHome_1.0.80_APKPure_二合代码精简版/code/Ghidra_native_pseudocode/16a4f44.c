
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016b4f44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_016b53d8 + 0x16b4f68);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b53dc + 0x16b4f7c));
    func_0x01438628(*(undefined4 *)(_UNK_016b53e0 + 0x16b4f88));
    func_0x01438628(*(undefined4 *)(_UNK_016b53e4 + 0x16b4f94));
    func_0x01438628(*(undefined4 *)(_UNK_016b53e8 + 0x16b4fa0));
    func_0x01438628(*(undefined4 *)(_UNK_016b53ec + 0x16b4fac));
    func_0x01438628(*(undefined4 *)(_UNK_016b53f0 + 0x16b4fb8));
    func_0x01438628(*(undefined4 *)(_UNK_016b53f4 + 0x16b4fc4));
    func_0x01438628(*(undefined4 *)(_UNK_016b53f8 + 0x16b4fd0));
    func_0x01438628(*(undefined4 *)(_UNK_016b53fc + 0x16b4fdc));
    func_0x01438628(*(undefined4 *)(_UNK_016b5400 + 0x16b4fe8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8909,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016b5404 + 0x16b5058) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016af738();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_016b43d4(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_016b5408 + 0x16b50bc);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_016b540c + 0x16b50d0));
        if (*(int *)(**(int **)(_UNK_016b5410 + 0x16b50e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016b5414 + 0x16b5108));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_016b5418 + 0x16b51d4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_016af738();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_016b47e8(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_016b541c + 0x16b5224));
          iVar3 = FUN_016af738();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_016b4854();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x016cd7b4(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_016b5420 + 0x16b5150) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016b5424 + 0x16b516c));
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
        func_0x020257a4(iVar3,0x2d6,uVar2,**(undefined4 **)(_UNK_016b5428 + 0x16b52d8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_016b542c + 0x16b5310) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_016b5430 + 0x16b536c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x74;
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
    iVar1 = func_0x029540a4(0x8909,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

