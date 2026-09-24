
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0167a9e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0167ae7c + 0x167aa0c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167ae80 + 0x167aa20));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae84 + 0x167aa2c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae88 + 0x167aa38));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae8c + 0x167aa44));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae90 + 0x167aa50));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae94 + 0x167aa5c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae98 + 0x167aa68));
    func_0x01438628(*(undefined4 *)(_UNK_0167ae9c + 0x167aa74));
    func_0x01438628(*(undefined4 *)(_UNK_0167aea0 + 0x167aa80));
    func_0x01438628(*(undefined4 *)(_UNK_0167aea4 + 0x167aa8c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x875a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0167aea8 + 0x167aafc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01676670();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0167aed8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0167aeac + 0x167ab60);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0167aeb0 + 0x167ab74));
        if (*(int *)(**(int **)(_UNK_0167aeb4 + 0x167ab8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0167aeb8 + 0x167abac));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0167aebc + 0x167ac78) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01676670();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0167b2ec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0167aec0 + 0x167acc8));
          iVar3 = FUN_01676670();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0167b358();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01693894(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0167aec4 + 0x167abf4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0167aec8 + 0x167ac10));
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
        func_0x020257a4(iVar3,0x329,uVar2,**(undefined4 **)(_UNK_0167aecc + 0x167ad7c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0167aed0 + 0x167adb4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0167aed4 + 0x167ae10));
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
    iVar1 = func_0x029540a4(0x875a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

