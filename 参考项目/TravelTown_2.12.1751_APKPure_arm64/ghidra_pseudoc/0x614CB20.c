/* Ghidra 12.1.2 native pseudocode; RVA 0x614CB20; Merger.Rewards.Constants.RewardTypesConstants.GetRewardType; status ok */


undefined8 Merger_Rewards_Constants_RewardTypesConstants__GetRewardType(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uStack_48;
  undefined4 uStack_14;
  
  if ((bRam0000000007e2464b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2464b = 1;
  }
  puVar1 = PTR_DAT_077730b8;
  switch(param_1) {
  case 0:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xc0;
    break;
  case 1:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xb0;
    break;
  case 2:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xd0;
    break;
  case 3:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xd8;
    break;
  case 4:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xb8;
    break;
  case 5:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xa8;
    break;
  case 6:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 200;
    break;
  case 7:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xf0;
    break;
  case 8:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xf8;
    break;
  case 9:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x100;
    break;
  case 10:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x108;
    break;
  case 0xb:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x110;
    break;
  case 0xc:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x118;
    break;
  case 0xd:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x120;
    break;
  case 0xe:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x128;
    break;
  case 0xf:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x130;
    break;
  case 0x10:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0x138;
    break;
  case 0x11:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xe0;
    break;
  case 0x12:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xa0;
    break;
  case 0x13:
    lVar5 = *(long *)PTR_DAT_077730b8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    lVar8 = 0xe8;
    break;
  default:
    uStack_14 = param_1;
    uVar2 = func_0x03280a2c(PTR_DAT_0777a670);
    uVar2 = func_0x03280b94(uVar2,&uStack_14);
    func_0x03280a2c(PTR_DAT_077517e8);
    uVar3 = func_0x03280ca0();
    uVar4 = func_0x03280a2c(PTR_DAT_077dbd08);
    func_0x056ebf98(uVar3,uVar4,uVar2,0,0);
    uVar2 = func_0x03280a2c(PTR_DAT_077dbd10);
    auVar9 = func_0x03280b7c(uVar3,uVar2);
    puVar1 = PTR_DAT_077730b8;
    puVar6 = auVar9._8_8_;
    if ((bRam0000000007e2464c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077dbd18);
      func_0x03280a18(PTR_DAT_077dbd20);
      func_0x03280a18(PTR_DAT_077dbd28);
      func_0x03280a18(PTR_DAT_077730b8);
      bRam0000000007e2464c = 1;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar5 = *(long *)puVar1;
    }
    *puVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30);
    uVar2 = func_0x032809c4(puVar6);
    if (auVar9._0_8_ != 0) {
      uStack_48 = 0;
      uVar2 = func_0x0437ba9c(&uStack_48,*(undefined4 *)(auVar9._0_8_ + 0x28),
                              *(undefined8 *)PTR_DAT_077dbd20);
      if ((uStack_48 & 0xff) != 0) {
        iVar7 = (int)(uStack_48 >> 0x20);
        if (iVar7 == 1) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar5 = *(long *)puVar1;
          }
          uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38);
        }
        else {
          if (iVar7 != 0) {
            return uVar2;
          }
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar5 = *(long *)puVar1;
          }
          uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30);
        }
        *puVar6 = uVar2;
        uVar2 = func_0x032809c4(puVar6);
      }
    }
    return uVar2;
  }
  return *(undefined8 *)(*(long *)(lVar5 + 0xb8) + lVar8);
}

