
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c87054(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01c87510 + 0x1c8706c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c87514 + 0x1c87080));
    func_0x01438628(*(undefined4 *)(_UNK_01c87518 + 0x1c8708c));
    func_0x01438628(*(undefined4 *)(_UNK_01c8751c + 0x1c87098));
    func_0x01438628(*(undefined4 *)(_UNK_01c87520 + 0x1c870a4));
    func_0x01438628(*(undefined4 *)(_UNK_01c87524 + 0x1c870b0));
    func_0x01438628(*(undefined4 *)(_UNK_01c87528 + 0x1c870bc));
    func_0x01438628(*(undefined4 *)(_UNK_01c8752c + 0x1c870c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c87530 + 0x1c870d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c87534 + 0x1c870e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c87538 + 0x1c870ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c8753c + 0x1c870f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c87540 + 0x1c87104));
    func_0x01438628(*(undefined4 *)(_UNK_01c87544 + 0x1c87110));
    func_0x01438628(*(undefined4 *)(_UNK_01c87548 + 0x1c8711c));
    func_0x01438628(*(undefined4 *)(_UNK_01c8754c + 0x1c87128));
    func_0x01438628(*(undefined4 *)(_UNK_01c87550 + 0x1c87134));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xad7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 != 0) {
      iVar1 = 0;
      while( true ) {
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar1) break;
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar1,**(undefined4 **)(_UNK_01c87554 + 0x1c87210));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0x10) == '\0') {
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c87558 + 0x1c87254));
          func_0x024f0510(iVar3,**(undefined4 **)(_UNK_01c8755c + 0x1c87268));
          iVar7 = *(int *)(iVar2 + 0x14);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x024f19c4(iVar7,**(undefined4 **)(_UNK_01c87560 + 0x1c87290));
          puVar10 = *(undefined4 **)(_UNK_01c87564 + 0x1c872b0);
          piVar11 = *(int **)(_UNK_01c87568 + 0x1c872b8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x024f19d4(&uStack_48,iVar7,**(undefined4 **)(_UNK_01c8756c + 0x1c872d0));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          while (iVar7 = func_0x0151793c(&uStack_38,*puVar10), uVar5 = uStack_2c, iVar7 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar3 + 8);
            uVar9 = *(uint *)(iVar3 + 0xc);
            iVar7 = *piVar11;
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar9 + 1;
              *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar5;
            }
            else {
              func_0x024f0520(iVar3,uVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
            }
          }
          func_0x024f19d8(&uStack_38,**(undefined4 **)(_UNK_01c87570 + 0x1c87370));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar2 + 0x14);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b74598(iVar7,**(undefined4 **)(_UNK_01c87578 + 0x1c873a4));
          uVar9 = 0;
          iVar7 = 0;
          while( true ) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0xc) <= iVar7) break;
            iVar8 = *(int *)(iVar2 + 0x14);
            if (*(int *)(**(int **)(_UNK_01c87580 + 0x1c873d8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01c87584 + 0x1c873f8));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar12 = func_0x026ffbe0(iVar4,0);
            uVar13 = func_0x024f0530(iVar3,iVar7,**(undefined4 **)(_UNK_01c87588 + 0x1c87430));
            uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if (iVar8 == 0) {
              func_0x014388e4();
              uVar5 = extraout_r1;
            }
            func_0x03b74530(iVar8,uVar5,(uint)uVar12 + uVar9,
                            (int)((ulonglong)uVar12 >> 0x20) + ((int)uVar9 >> 0x1f) +
                            (uint)CARRY4((uint)uVar12,uVar9),(int)uVar13,
                            **(undefined4 **)(_UNK_01c8758c + 0x1c8745c));
            uVar9 = uVar9 + 1000;
            iVar7 = iVar7 + 1;
          }
        }
        iVar1 = iVar1 + 1;
      }
      FUN_01c84820(param_1);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xad7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

