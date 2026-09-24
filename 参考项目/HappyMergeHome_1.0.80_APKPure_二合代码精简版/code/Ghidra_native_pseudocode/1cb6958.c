
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc6958(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01cc6ea0 + 0x1cc6978);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ea4 + 0x1cc6990));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ea8 + 0x1cc699c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6eac + 0x1cc69a8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6eb0 + 0x1cc69b4));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6eb4 + 0x1cc69c0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6eb8 + 0x1cc69cc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ebc + 0x1cc69d8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ec0 + 0x1cc69e4));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ec4 + 0x1cc69f0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ec8 + 0x1cc69fc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ecc + 0x1cc6a08));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ed0 + 0x1cc6a14));
    func_0x01438628(*(undefined4 *)(_UNK_01cc6ed4 + 0x1cc6a20));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5e64,0);
  if (iVar3 == 0) {
    iVar3 = FUN_01cc4b60(param_1);
    if ((-1 < param_3) && (iVar3 != 0)) {
      if (*(int *)(**(int **)(_UNK_01cc6ed8 + 0x1cc6aa0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01cc6edc + 0x1cc6abc));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029a6fa8(iVar3,param_3,0);
      if (*(int *)(**(int **)(_UNK_01cc6ee0 + 0x1cc6af0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x0202346c(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x01524ffc(iVar3 + 0x2c,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar4,0x203,**(undefined4 **)(_UNK_01cc6ee4 + 0x1cc6b4c),uVar5,0,0,0);
      piVar9 = *(int **)(_UNK_01cc6ee8 + 0x1cc6b80);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar11 = *(undefined4 **)(_UNK_01cc6eec + 0x1cc6b9c);
      iVar3 = func_0x014e9518(*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02bd1624(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
        func_0x026f6b3c(0,param_3,0);
        func_0x014388e4();
      }
      else {
        func_0x026f6b3c(iVar3,param_3,0);
      }
      func_0x026f6bf8(iVar3,1,0);
      iVar4 = func_0x014e9518(*puVar11);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x02bdd790(iVar4,param_2,0,0,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar11);
      if (iVar4 == -1) {
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02be0bf4(iVar6,iVar3,0,1,0,0);
        iVar4 = **(int **)(**(int **)(_UNK_01cc6ef0 + 0x1cc6cfc) + 0x5c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02c3e3f8(&uStack_30,iVar4,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        uVar5 = uStack_30;
        if (*(int *)(**(int **)(_UNK_01cc6ef4 + 0x1cc6d2c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01cc6ef8 + 0x1cc6d5c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar3 + 8);
        if (param_4 == 0) {
          func_0x014388e4();
        }
        func_0x02bebb14(&uStack_30,param_4,param_2,0);
        piVar9 = *(int **)(_UNK_01cc6efc + 0x1cc6da0);
        iVar3 = *piVar9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar9;
        }
        iVar6 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
            iVar3 = *piVar9;
          }
          uVar7 = **(undefined4 **)(iVar3 + 0x5c);
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01cc6f00 + 0x1cc6df8));
          func_0x0152e3ec(iVar6,uVar7,**(undefined4 **)(_UNK_01cc6f04 + 0x1cc6e18),0);
          piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0xc);
          *piVar9 = iVar6;
          func_0x014385cc(piVar9,iVar6);
        }
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02b7fc84(iVar4,uVar10,uStack_30,uStack_2c,uStack_28,uVar5,uVar1,uVar2,0x3f333333,
                        0x40000000,0x3f800000,iVar6,0);
      }
      else {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar3 + 8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02bb18c4(iVar6,iVar4,uVar5,2,0,param_2,1,0xffffffff,
                        **(undefined4 **)(_UNK_01cc6f08 + 0x1cc6c98),0);
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5e64,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028759c4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return;
}

