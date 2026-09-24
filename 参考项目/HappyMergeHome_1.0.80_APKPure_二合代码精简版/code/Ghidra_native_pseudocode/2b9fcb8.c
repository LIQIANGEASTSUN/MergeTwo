
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bafcb8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar7 = (char *)(_UNK_02bb0224 + 0x2bafcd8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb0228 + 0x2bafcec));
    func_0x01438628(*(undefined4 *)(_UNK_02bb022c + 0x2bafcf8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0230 + 0x2bafd04));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0234 + 0x2bafd10));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0238 + 0x2bafd1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb023c + 0x2bafd28));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0240 + 0x2bafd34));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0244 + 0x2bafd40));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0248 + 0x2bafd4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb024c + 0x2bafd58));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0250 + 0x2bafd64));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0254 + 0x2bafd70));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0258 + 0x2bafd7c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb025c + 0x2bafd88));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0260 + 0x2bafd94));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0264 + 0x2bafda0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0268 + 0x2bafdac));
    func_0x01438628(*(undefined4 *)(_UNK_02bb026c + 0x2bafdb8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0270 + 0x2bafdc4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0274 + 0x2bafdd0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x39ca,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046ccb14(iVar1,param_3,**(undefined4 **)(_UNK_02bb0278 + 0x2bafe68));
    iVar1 = 0;
    if ((param_2 != 0 && iVar2 != 0) &&
       (iVar2 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb027c + 0x2bafe98)), iVar2 != 0))
    {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb0280 + 0x2bafeb8));
      func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02bb0284 + 0x2bafecc));
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x046c268c(iVar2,**(undefined4 **)(_UNK_02bb0288 + 0x2bafef0));
      func_0x046c2934(&uStack_58,param_2,**(undefined4 **)(_UNK_02bb028c + 0x2baff0c));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar11 = *(undefined4 **)(_UNK_02bb0290 + 0x2baff38);
      puVar12 = *(undefined4 **)(_UNK_02bb0294 + 0x2baff40);
      while (iVar2 = func_0x048a44e0(&uStack_40,*puVar11), uVar10 = uStack_34, iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x24);
        uVar8 = (undefined4)uStack_30;
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046c24b0(iVar2,uVar10,uVar8,*puVar12);
      }
      func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02bb0298 + 0x2baff88));
      iVar2 = 0;
      do {
        iVar3 = FUN_02bad050(param_1,param_3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar2) {
          return iVar1;
        }
        iVar3 = FUN_02bad050(param_1,param_3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b780b0(iVar3,iVar2,**(undefined4 **)(_UNK_02bb02a4 + 0x2bb000c));
        uVar10 = *(undefined4 *)(param_1 + 0x24);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 8);
        if (*(int *)(**(int **)(_UNK_02bb02a8 + 0x2bb0034) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x035e50e0(uVar10,uVar8,**(undefined4 **)(_UNK_02bb02ac + 0x2bb0058));
        if (0 < iVar4) {
          iVar6 = *(int *)(param_1 + 0x24);
          uVar10 = *(undefined4 *)(iVar3 + 8);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x046c2488(iVar6,uVar10,iVar4 + -1,**(undefined4 **)(_UNK_02bb02b0 + 0x2bb0094));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar1 + 8);
          uVar9 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_02bb02b4 + 0x2bb00c8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar6 = *piVar5;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar9 + 1;
            *(int *)(iVar4 + uVar9 * 4 + 0x10) = iVar2;
          }
          else {
            func_0x024f0520(iVar1,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
          iVar4 = *(int *)(param_1 + 0x24);
          uVar10 = *(undefined4 *)(iVar3 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x046c23f8(iVar4,uVar10,**(undefined4 **)(_UNK_02bb02b8 + 0x2bb0130));
          if (iVar4 < 1) {
            iVar4 = *(int *)(param_1 + 0x24);
            uVar10 = *(undefined4 *)(iVar3 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x046c3bd8(iVar4,uVar10,**(undefined4 **)(_UNK_02bb02bc + 0x2bb0164));
          }
        }
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x046c2130(iVar3,**(undefined4 **)(_UNK_02bb02c0 + 0x2bb0188));
        iVar2 = iVar2 + 1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x39ca,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02895178(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

